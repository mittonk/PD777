// Following Stella.
#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <sstream>

#include "../core/catLowBasicTypes.h"

#define PD777_STATE_HEADER "PD777state"
#define PD777_STATE_VERSION 1

using namespace std;

class Serializer
{
  public:
    Serializer(void);

    /**
      Answers whether the serializer is currently initialized for reading
      and writing.
    */
    explicit operator bool() const { return myStream != nullptr; }

    /**
      Sets the read/write location to the given offset in the stream.
    */
    void setPosition(size_t pos);

    /**
      Resets the read/write location to the beginning of the stream.
    */
    void rewind();

    /**
      Returns the current total size of the stream.
    */
    size_t size();

    /**
      Reads a byte value (unsigned 8-bit) from the current input stream.

      @result The byte value which has been read from the stream.
    */
    u8 getByte() const;

    /**
      Reads a byte array (unsigned 8-bit) from the current input stream.

      @param array  The location to store the bytes read
      @param size   The size of the array (number of bytes to read)
    */
    void getByteArray(u8* array, size_t size) const;

    /**
      Reads a short value (unsigned 16-bit) from the current input stream.

      @result The short value which has been read from the stream.
    */
    u16 getShort() const;

    /**
      Reads an int value (unsigned 32-bit) from the current input stream.

      @result The int value which has been read from the stream.
    */
    u32 getInt() const;

    /**
      Reads a string from the current input stream.

      @result The string which has been read from the stream.
    */
    string getString() const;

    /**
      Reads a boolean value from the current input stream.

      @result The boolean value which has been read from the stream.
    */
    bool getBool() const;

    /**
      Writes an byte value (unsigned 8-bit) to the current output stream.

      @param value The byte value to write to the output stream.
    */
    void putByte(u8 value);

    /**
      Writes a byte array (unsigned 8-bit) to the current output stream.

      @param array  The bytes to write
      @param size   The size of the array (number of bytes to write)
    */
    void putByteArray(const u8* array, size_t size);

    /**
      Writes a short value (unsigned 16-bit) to the current output stream.

      @param value The short value to write to the output stream.
    */
    void putShort(u16 value);

    /**
      Writes an int value (unsigned 32-bit) to the current output stream.

      @param value The int value to write to the output stream.
    */
    void putInt(u32 value);

    /**
      Writes a string(view) to the current output stream.

      @param str The string to write to the output stream.
    */
    void putString(string_view str);

    /**
      Writes a boolean value to the current output stream.

      @param b The boolean value to write to the output stream.
    */
    void putBool(bool b);

  private:
    // The stream to send the serialized data to.
    unique_ptr<iostream> myStream;

    static constexpr u8 TruePattern = 0xfe, FalsePattern = 0x01;
};

#endif
