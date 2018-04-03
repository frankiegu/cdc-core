#ifndef CDC_TEST_NETWORK
#include <consensus/genesis/GenesisJson.hpp>
#include <consensus/genesis/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>


namespace cdcchain {
    namespace consensus {static const unsigned char raw_genesis_config0[] =
{
  0x5f, 0x3d, 0xc3, 0x5a, 0x00, 0x09, 0x04, 0x63, 0x64, 0x63, 0x30, 0x02, 0xd1, 
  0x23, 0xfd, 0x01, 0x23, 0x15, 0x61, 0x8f, 0x11, 0x6f, 0x04, 0x10, 0x17, 0xcb, 
  0x11, 0x78, 0x64, 0x4b, 0x85, 0x59, 0xcf, 0x9d, 0x41, 0x97, 0xbe, 0x1b, 0x90, 
  0x65, 0x28, 0x96, 0x1c, 0x97, 0x04, 0x63, 0x64, 0x63, 0x31, 0x02, 0x39, 0x0a, 
  0xfe, 0x02, 0x1a, 0x1b, 0x87, 0xd4, 0x1c, 0x35, 0xb5, 0xbd, 0xb9, 0xde, 0x65, 
  0x80, 0xff, 0x41, 0xe8, 0x1f, 0x85, 0x17, 0xba, 0x8e, 0x26, 0x23, 0xc2, 0xa8, 
  0xc2, 0xe9, 0xb4, 0x0f, 0x04, 0x63, 0x64, 0x63, 0x32, 0x03, 0xc0, 0x83, 0xb2, 
  0x8a, 0x91, 0x51, 0xf2, 0x24, 0xc9, 0xfd, 0x3a, 0xe4, 0xc6, 0x55, 0xf8, 0x21, 
  0xcd, 0xed, 0x25, 0x9a, 0x3e, 0xbc, 0x74, 0xd3, 0xa0, 0xca, 0xd4, 0x99, 0x91, 
  0x8e, 0x0a, 0x71, 0x04, 0x63, 0x64, 0x63, 0x33, 0x03, 0x77, 0xa8, 0x19, 0x2e, 
  0xbe, 0x61, 0xb9, 0x0a, 0x5b, 0x6a, 0x16, 0x64, 0x75, 0x58, 0x8b, 0x57, 0xd3, 
  0xff, 0xa2, 0x9f, 0x79, 0xd7, 0x1f, 0xd8, 0x13, 0x72, 0x03, 0xb2, 0xac, 0xf8, 
  0xec, 0x64, 0x04, 0x63, 0x64, 0x63, 0x34, 0x02, 0x78, 0x33, 0x06, 0x7e, 0x12, 
  0x87, 0xdb, 0xa9, 0xc2, 0xdf, 0xa4, 0x3d, 0x25, 0x67, 0x72, 0xf5, 0x88, 0xc2, 
  0xa8, 0x38, 0xc9, 0xb0, 0x81, 0x4c, 0xae, 0xd2, 0xd5, 0x6f, 0x48, 0xaa, 0x48, 
  0x21, 0x04, 0x63, 0x64, 0x63, 0x35, 0x02, 0xb7, 0xaa, 0xa5, 0x45, 0x5f, 0x5b, 
  0x6e, 0xd3, 0xd2, 0x06, 0x78, 0x51, 0xc9, 0xd8, 0x4f, 0xe1, 0xb9, 0xf1, 0x93, 
  0xf2, 0xae, 0xf4, 0xe5, 0x33, 0x6f, 0x95, 0x1c, 0x0f, 0x66, 0xc8, 0x4a, 0xfc, 
  0x04, 0x63, 0x64, 0x63, 0x36, 0x03, 0x7a, 0x04, 0xbe, 0x6b, 0x53, 0x85, 0x14, 
  0xfe, 0xaf, 0x70, 0x04, 0x62, 0x14, 0x1d, 0x0a, 0xdf, 0x3f, 0x15, 0xcd, 0xad, 
  0xdb, 0xa5, 0xc9, 0xa7, 0xa9, 0x4e, 0xa7, 0xc1, 0xd7, 0x07, 0x15, 0xbb, 0x04, 
  0x63, 0x64, 0x63, 0x37, 0x03, 0x80, 0x96, 0xad, 0x68, 0x01, 0x54, 0xd2, 0x17, 
  0xc8, 0x52, 0xd9, 0x9d, 0x3f, 0x30, 0x66, 0x20, 0x6f, 0xe7, 0x41, 0x9b, 0xb7, 
  0x79, 0x5f, 0x6f, 0x16, 0xfd, 0x40, 0x82, 0x93, 0x16, 0xd5, 0x22, 0x04, 0x63, 
  0x64, 0x63, 0x38, 0x02, 0x05, 0xe8, 0xbc, 0xad, 0xb9, 0xbf, 0x0a, 0xff, 0x5f, 
  0x2e, 0x02, 0x30, 0x0a, 0x28, 0xbb, 0xa5, 0x95, 0x68, 0xfd, 0xc8, 0x23, 0x85, 
  0x5d, 0x84, 0xfe, 0x4e, 0x12, 0xc6, 0x51, 0xd4, 0xe8, 0xa8, 0x09, 0x2a, 0x30, 
  0x78, 0x64, 0x64, 0x38, 0x38, 0x34, 0x65, 0x39, 0x38, 0x33, 0x36, 0x36, 0x38, 
  0x62, 0x30, 0x35, 0x35, 0x65, 0x34, 0x34, 0x31, 0x63, 0x65, 0x34, 0x63, 0x39, 
  0x65, 0x35, 0x66, 0x34, 0x33, 0x35, 0x37, 0x65, 0x62, 0x65, 0x33, 0x33, 0x32, 
  0x64, 0x65, 0x00, 0xa0, 0x72, 0x4e, 0x18, 0x09, 0x00, 0x00, 0x2a, 0x30, 0x78, 
  0x65, 0x63, 0x37, 0x61, 0x35, 0x63, 0x32, 0x66, 0x31, 0x61, 0x64, 0x39, 0x66, 
  0x37, 0x62, 0x35, 0x37, 0x36, 0x34, 0x33, 0x63, 0x38, 0x32, 0x63, 0x36, 0x36, 
  0x32, 0x66, 0x66, 0x34, 0x61, 0x64, 0x65, 0x34, 0x63, 0x31, 0x38, 0x63, 0x64, 
  0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x39, 
  0x30, 0x63, 0x37, 0x62, 0x30, 0x63, 0x38, 0x32, 0x66, 0x36, 0x64, 0x33, 0x61, 
  0x34, 0x30, 0x31, 0x38, 0x64, 0x34, 0x33, 0x64, 0x37, 0x34, 0x33, 0x64, 0x38, 
  0x36, 0x32, 0x34, 0x30, 0x64, 0x36, 0x64, 0x35, 0x37, 0x61, 0x61, 0x62, 0x65, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x37, 0x34, 
  0x64, 0x30, 0x35, 0x36, 0x30, 0x31, 0x62, 0x38, 0x30, 0x66, 0x65, 0x34, 0x31, 
  0x65, 0x64, 0x33, 0x64, 0x65, 0x61, 0x39, 0x34, 0x61, 0x65, 0x31, 0x61, 0x37, 
  0x35, 0x30, 0x63, 0x31, 0x35, 0x63, 0x39, 0x38, 0x31, 0x62, 0x34, 0x66, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x61, 0x64, 0x33, 
  0x36, 0x31, 0x62, 0x62, 0x37, 0x61, 0x63, 0x32, 0x63, 0x66, 0x34, 0x36, 0x65, 
  0x62, 0x61, 0x62, 0x36, 0x62, 0x61, 0x33, 0x65, 0x31, 0x65, 0x62, 0x30, 0x65, 
  0x37, 0x30, 0x35, 0x33, 0x62, 0x37, 0x65, 0x62, 0x32, 0x65, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x35, 0x31, 0x61, 0x35, 
  0x38, 0x62, 0x38, 0x66, 0x38, 0x66, 0x62, 0x66, 0x62, 0x34, 0x39, 0x35, 0x62, 
  0x32, 0x31, 0x65, 0x30, 0x61, 0x61, 0x35, 0x35, 0x62, 0x64, 0x65, 0x35, 0x61, 
  0x62, 0x64, 0x35, 0x33, 0x37, 0x37, 0x34, 0x37, 0x34, 0x66, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x38, 0x36, 0x32, 0x62, 0x37, 
  0x30, 0x32, 0x37, 0x35, 0x64, 0x30, 0x37, 0x37, 0x66, 0x31, 0x38, 0x38, 0x61, 
  0x30, 0x33, 0x61, 0x38, 0x31, 0x37, 0x65, 0x62, 0x62, 0x30, 0x35, 0x30, 0x62, 
  0x63, 0x37, 0x66, 0x38, 0x30, 0x37, 0x35, 0x34, 0x64, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x33, 0x64, 0x34, 0x32, 0x37, 0x66, 
  0x63, 0x37, 0x64, 0x64, 0x33, 0x33, 0x34, 0x35, 0x64, 0x65, 0x63, 0x31, 0x63, 
  0x37, 0x32, 0x66, 0x64, 0x35, 0x39, 0x61, 0x63, 0x37, 0x39, 0x38, 0x62, 0x65, 
  0x35, 0x36, 0x32, 0x33, 0x64, 0x33, 0x66, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x2a, 0x30, 0x78, 0x62, 0x62, 0x36, 0x35, 0x38, 0x62, 0x66, 
  0x31, 0x63, 0x61, 0x37, 0x39, 0x31, 0x64, 0x33, 0x62, 0x30, 0x61, 0x33, 0x34, 
  0x34, 0x63, 0x62, 0x34, 0x62, 0x33, 0x34, 0x63, 0x62, 0x35, 0x39, 0x64, 0x31, 
  0x66, 0x38, 0x64, 0x62, 0x39, 0x66, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GenesisState get_builtin_genesis_block_config()
{
  unsigned total_size = sizeof(raw_genesis_config0);
  std::unique_ptr<char[]> buffer(new char[total_size]);
  char *ptr = buffer.get();
  memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  ptr += sizeof(raw_genesis_config0);
  return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
}

fc::sha256 get_builtin_genesis_block_state_hash()
{
  fc::sha256::encoder encoder;
  encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
  return encoder.result();
}
    }
} // end namespace cdcchain::consensus

#endif