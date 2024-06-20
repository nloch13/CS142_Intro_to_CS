MPI: Message Passing Interface

Executable = program
Communicator = network of computer/cores
Processor = CORE/CPU doing the work
Process = work the CPU/CORE is doing 
Rank = identifying number of the CPU/CORE
Communication = message passing

Send Messages 
MPI_Send(&__, count, dataType, dest/target, tag, MPI_COMM_WORLD);

&___ = array/message that we are sending 
count = lenght of the array/message
dataType = data type; int =MPI_INT
dest/target = destination rank 
tag = unique identifer for the data transfer; usually 0

Example MPI_Send
MPI_Send(&message, 1, MPI_INU, 1, 0, MPI_COMM_WORLD);


Receive message 
MPI_Recv(&__, count, dataType, source, tag, MPI_COMM_WORLD, &status);

