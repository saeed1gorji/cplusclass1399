#ifndef SENDER_H
#define SENDER_H
#include <string>


/***************************************************************************//**
 * This class sends a prepared block of data
 * tryes to connects to server.
 ******************************************************************************/

class Sender
{


public:
     
   /***************************************************************************//**
    * A constructor with two parameters: port and ip address of server.
    ******************************************************************************/ 
    Sender(size_t port, std::string ip_address);

   /***************************************************************************//**
    * This member function sends a block of data,
    * it gets a block of data by refrence as parameter,
    * it would return zero, if could send successfuly.
    ******************************************************************************/
    int send(std::string&);

   /***************************************************************************//**
    * This sets port member field.
    ******************************************************************************/
    void setPort(size_t);

   /***************************************************************************//**
    * This sets ip_address field.
    ******************************************************************************/
    void setIpAddress(std::string);

private:
 
    size_t port; ///< the port on which reciever is listening.
    std::string ip_address; ///< the ip address of reciever
    
}


#endif
      
