#pragma once
#include <string>
#include <iostream>
std::string base64_encode(char const* bytes_to_encode, unsigned int in_len) ;
std::string base64_decode(std::string const& encoded_string);
std::string base64_msg(const std::string& msg);