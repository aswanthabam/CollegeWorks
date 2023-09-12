echo -n "Enter Folder Name: "
read folder

interface=$folder"Interface"
implementaion=$folder"Implementation"
client=$folder"Client"
server=$folder"Server"

echo "Interface: $interface"
echo "implementation: $implementaion"
echo "client: $client"
echo "server: $server"

cd $folder

javac $interface
javac $implementaion
javac $client
javac $server

javac $client