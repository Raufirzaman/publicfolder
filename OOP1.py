
class database:
    def __init__(self,server_address,port):
        self.__server_address=server_address
        self.__port=port
    @property
    def get_server_a(self):
        return self.__server_address
    @property
    def get_port_a(self):
        return self.__port
    def __str__(self):
         return f"Server Address:{self.__server_address} Port:{self.__port}"

class orders(database):
    
    def __init__(self, server_address, port):
        super().__init__(server_address, port)
        self.is_connected=False
    def connection(self):
        if self.is_connected==True:return "The connection is already established"
        self.is_connected=True
        return "Connecting to Orders database..."
    def disconnection(self):
        self.is_connected=False
        return "Disconnecting from Orders database..."

class cache(database):
    
    def __init__(self, server_address, port):
        super().__init__(server_address, port)
        self.is_connected=False
    def connection(self):
        if self.is_connected==True:return "The connection is already established"
        self.is_connected=True
        return "Connecting to Cache database..."
    def disconnection(self):
        self.is_connected=False
        return "Disconnecting from Cache database..."

class analytics(database):
    def __init__(self, server_address, port):
        super().__init__(server_address, port)
        self.is_connected=False
    def connection(self):
        if self.is_connected==True:return "The connection is already established"
        self.is_connected=True
        return "Connecting to Analytics database..."
    def disconnection(self):
        self.is_connected=False
        return "Disconnecting from Analytics database..."

#Database Creation
O1=orders("192.168.1.244",4)
C1=cache("192.168.1.244",5)
A1=analytics("192.168.1.244",6)
O2=orders("192.168.20.244",10)
A2=analytics("192.168.20.244",14)

#Storing server location and port number automatically
print(f"Order DB 1:{O1}\n Order DB 2:{O2}\nCache DB 1: {C1}\n Analytics DB 1 {A1}\n Analytics DB 2:{A2}\n")

print(A1.connection()+"\n")
print(A2.connection()+"\n")
print(A1.connection()+"\n")#Task 4 demonstration
print(C1.connection()+"\n")
print(A1.disconnection()+"\n")
print(A1.connection()+"\n")




        


        