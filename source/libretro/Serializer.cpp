// Following Stella.
#include "Serializer.h"

using std::ios;
using std::ios_base;
using std::make_unique;

Serializer::Serializer()
  : myStream{make_unique<stringstream>(ios::in | ios::out | ios::binary)}
{
  // For some reason, Windows and possibly macOS needs to store something in
  // the stream before it is used for the first time
  if(myStream)
  {
    putBool(true);
    rewind();
    myStream->exceptions( ios_base::failbit | ios_base::badbit | ios_base::eofbit );
  }
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::setPosition(size_t pos)
{
  myStream->clear();
  myStream->seekg(pos);
  myStream->seekp(pos);
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::rewind()
{
  myStream->clear();
  myStream->seekg(ios_base::beg);
  myStream->seekp(ios_base::beg);
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
size_t Serializer::size()
{
  const std::streampos oldPos = myStream->tellp();

  myStream->seekp(0, std::ios::end);
  const size_t s = myStream->tellp();
  myStream->seekp(oldPos);

  return s;
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
u8 Serializer::getByte() const
{
  char buf{0};
  myStream->read(&buf, 1);

  return buf;
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::getByteArray(u8* array, size_t size) const
{
  myStream->read(reinterpret_cast<char*>(array), size);
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
u16 Serializer::getShort() const
{
  u16 val{0};
  myStream->read(reinterpret_cast<char*>(&val), sizeof(u16));

  return val;
}

u32 Serializer::getInt() const
{
  u32 val{0};
  myStream->read(reinterpret_cast<char*>(&val), sizeof(u32));

  return val;
}

string Serializer::getString() const
{
  const int len = getInt();
  string str;
  str.resize(len);
  myStream->read(str.data(), len);

  return str;
}

bool Serializer::getBool() const
{
  return getByte() == TruePattern;
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putByte(u8 value)
{
  myStream->write(reinterpret_cast<char*>(&value), 1);
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putByteArray(const u8* array, size_t size)
{
  myStream->write(reinterpret_cast<const char*>(array), size);
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putShort(u16 value)
{
  myStream->write(reinterpret_cast<char*>(&value), sizeof(u16));
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putInt(u32 value)
{
  myStream->write(reinterpret_cast<char*>(&value), sizeof(u32));
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putString(string_view str)
{
  putInt(static_cast<u32>(str.size()));
  myStream->write(str.data(), str.size());
}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
void Serializer::putBool(bool b)
{
  putByte(b ? TruePattern: FalsePattern);
}
