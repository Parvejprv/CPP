
Networking domain Questions related to the interview:-
--------------------------------------------------------

Question :- What is the difference between IPv4 and IPv6?

IPv4 and IPv6 are two types of protocols for assigning addresses to devices on a network, but they have some key differences:

Address Length:

IPv4 addresses are 32 bits long, giving about 4.3 billion unique addresses.
IPv6 addresses are 128 bits long, offering a much larger pool of around 340 undecillion unique addresses.
Address Notation:

IPv4 addresses are written in dotted-decimal form, like 192.168.1.1.
IPv6 addresses use hexadecimal notation with colons separating each group, like 2001:0db8:85a3:0000:0000:8a2e:0370:7334.
Address Configuration:

IPv4 addresses can be assigned manually or automatically through methods like DHCP.
IPv6 addresses often use autoconfiguration or DHCPv6 for assignment.
Header Format:

IPv4 headers are relatively simple, containing various fields like version, length, and source/destination addresses.
IPv6 headers are more streamlined and efficient, with fixed-length headers containing fields for version, traffic class, and source/destination addresses.
Security and QoS Support:

IPv4 lacks built-in support for encryption, while IPv6 includes IPsec for security.
IPv6 also has features for quality of service (QoS) with a flow label field in the header.
Migration Challenges:

IPv4 addresses are running out due to their limited space.
IPv6 adoption is slow due to infrastructure upgrades, compatibility issues, and the need for both IPv4 and IPv6 to coexist during the transition.




Question10. What is router. Explain the types of routing. 
Ans10.  Router is used for conneting 2 or more different networks.IT also act as a default gateway. It control broadcast traffic to the LAN.
Router learns and advertise loops free path by using 3 different ways-
1. directly connected Routes
2. Static method by using static routing
3. Dynamic method using Routing protocol(RIP, EIGRP, OSPF) 

Question2. What is loopback address?
Ans2.. The IP address 127.0.0.1 is called loopback address. Packets are sent to this loopback address never reach the network but are looped through the network interface card only. Loopback address can be used for testing purpose to verify that the internal path through the TCP/IP protocols is working or not. In IPv6 we used ::1 0r   ::1  
Range of loopback address- 127.0.0.1 to 127.255.255.254
                       
Router Mode - There are 5 modes used in router:
1. user execution mode - Router > en then enter 
2. Privileged mode - Router # Conf t then enter 
3. Global configuration mode - Router (Config)# Int fa0/0    enter
4. Interface configuration mode - Router (Config-If )# Ip address 10.0.0.7 255.0.0.0
                                                                                                # no shut 
                                                                                                  # exit 
5. ROMMON mode - When we interrupt the boot process of the router. 
 
If you want to check status of interfaces of Router- 
Router (Config) # do sh ip int br
Question 8. DNS (Domain name server):
Answer: -
DNS is domain name server/system . It works on application layer, It is used for mapping the Ip address into host names and vice versa. It uses port no 53. 
working of DNS-
Between 2 server - use TCP 
Between client and server - Use UDP 
When I search google.com from the PC, It will send one dns query to the local DNS which is UDP based. Local DNS search database for the IP address. If the database is present then it will give back DNS reply to PC. If it is not present then it will hold that DNS query... and again it will send new DNS query to root DNS which is TCP based. Root DNS search database for Ip address . It will give back DNS reply to local DS. then local DNS will further give DNS reply to PC. PC then send HTTP request to the server. It will received reply from the server. 
PC (CLIENT)- ALSO SEARCH ITS CACHE MEMORY---  SEND DNS QUERY TO LOCAL DNS 
LOCAL DNS SEARCH ITS DATABASE (IP ADDRESS)
IF IP ADDRESS IS PRESNT THEN IT WILL REPLY TO CLIENT WHICH IS UDP BASED. 
IF IP ADDRESS IS NOT PRESENT- THEN IT HOLDS DNS QYERY .
AND GENERATE ANOTHER NEW QUERY TO THR ROOT DNS (TCP)

There are 2 lookup zones in DNS which is used in window server.
1.Forward lookup zone-It is DNS zone in which hostname into IP address relations are stored. 
2. Reverse lookup zone- IT is a DNS zone in which Ip addresses mapping into Hostnames. 
TLD (top level domain)- .com, .org, .in .
Root Nameserver- Root server is the first step in translating hostnames into Ip addresses.
TLD nameserver - It is the next step in the search for a specific Ip address. It hosts the last portion of a hostname ,(.com, .org).
Authoratative nameserver - It is th last step in the nameserver query. If the authoratative name server has access to the requested record, it will return the IP address for the requested hostname back to the DNS recursor that made the initial request. 
1. How we can check DNS server Ip :
1. open cmd- use command - ipconfig /all.
In window server, we use 2 types of lookup zones- 
1. Forward Lookup zone- used for mapping host name into Ip address .
2. Reverse lookup zone - used for ip address into host name .












Ping:
=====================
Question7. What is PING. Explain the protocols used in it?

Ans7. Ping stands for packet internet gropher.

It is system command utility that is used to check the connectivity between the devices. It only gives the result either successful or failed.
It uses ICMP protocol (internet control message protocol). It send 4 echo message from sender to receiver and if receiver receive 4 echo messages successfully then it also give echo reply to the sender.
It uses command- Ping <ip address of the devices which we want to check the connectivity).
Sometimes we only received 3 echo reply messages then it also shows failed in first attempt because of ARP (address resolution protocol). It is used for mapping mac address into ip address.



13. Types of Networks with Use Cases:

LAN (Local Area Network): Connects devices within a limited area like an office building or home. Use case: Sharing files and printers among devices in an office.
WAN (Wide Area Network): Connects devices over a large geographical area. Use case: Connecting branch offices of a company located in different cities.
MAN (Metropolitan Area Network): Covers a larger geographical area than LAN but smaller than WAN. Use case: Connecting universities within a city.
Wireless Networks: Use radio waves instead of cables for communication. Use case: Wi-Fi networks in cafes, airports, and homes.
Client-Server Networks: Clients request services from servers over the network. Use case: Accessing websites hosted on web servers.
Peer-to-Peer Networks: Devices communicate directly with each other without a central server. Use case: File sharing between computers in a home network.
















