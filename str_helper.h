#ifndef STR_HELPER_H
#define STR_HELPER_H

namespace SimpleWeb {

//#include "server_http.hpp"

template <class T>
//std::string to_http_string( const SimpleWeb::Server<T>::Request & r )
std::string to_http_string( const T & r )
{
    std::string res;

    res += "path: " + r.path + "\r\n";
    res += "method: " + r.method + "\r\n";
    res += "query_string: " + r.query_string + "\r\n";
    res += "http_version: " + r.http_version + "\r\n";
    res += "address: " + r.remote_endpoint_address() + ":" + std::to_string( r.remote_endpoint_port() ) + "\r\n";

    return res;
}

template <class T>
//std::string to_http_string( const SimpleWeb::Server<T>::Request & r )
std::string to_endpoint_string( const T & r )
{
    std::string res = r.remote_endpoint_address() + ":" + std::to_string( r.remote_endpoint_port() );

    return res;
}

} // namespace SimpleWeb

#endif // STR_HELPER_H
