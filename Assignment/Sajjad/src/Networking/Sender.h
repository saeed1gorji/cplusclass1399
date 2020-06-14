#ifndef SENDER_H
#define SENDER_H
#include <string>

class Sender
{

/// This class try to send data.

public:
    /// default constructor.    
    Sender();

    /// constructor with two parameters: size of block and key. 
    Sender(size_t, std::string);

    /// send a block of characters.
    int send(std::string&);

    void setPort(size_t);
    void setIpAddress(std::string);

private:
    /// the port on which reciever is listening.
    size_t mPort; 
    /// the ip address of reciever.
    std::string mIpAddress;
    
}


#endif
~      
