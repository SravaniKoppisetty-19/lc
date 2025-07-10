int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    int number_of_moves = 0;
    for(int i= 0 ;i< seatsSize;i++)
    {
        for(int j =0;j<seatsSize-1;j++)
        {
            if(seats[j] > seats[j+1])
            {
                int temp = seats[j];
                seats[j] = seats[j+1];
                seats[j+1] = temp;
            }
            if(students[j] > students[j+1])
            {
                int temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    for(int i =0;i<seatsSize;i++)
    {
         number_of_moves += abs(seats[i] - students[i]);
    }
    return number_of_moves;
}