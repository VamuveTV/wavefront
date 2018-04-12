





//FUNCTION wavefront algorithm to find most efficient path to goal
// this array is a 15x10 array, 150 cells in array
void WavefrontSearch1(unsigned char array1[15][10], int x_size, int y_size)
{
	//int goal_x, goal_y;
	bool foundWave = true;
	int currentWave = 1; //Looking for goal first

	while(foundWave == true)
	{
		foundWave = false;
		for(int y=0; y < y_size; y++)
		{
			for(int x=0; x < x_size; x++)
			{
				if(array1[x][y] == currentWave)
				{
					foundWave = true;
					int goal_x = x;
					int goal_y = y;
 
					if(goal_x > 0) //This code checks the array bounds heading WEST
						if(array1[goal_x-1][goal_y] == 0)  //This code checks the WEST direction
							array1[goal_x-1][goal_y] = currentWave + 1;
 
					if(goal_x < (x_size - 1)) //This code checks the array bounds heading EAST
						if(array1[goal_x+1][goal_y] == 0)//This code checks the EAST direction
							array1[goal_x+1][goal_y] = currentWave + 1;
 
					if(goal_y > 0)//This code checks the array bounds heading SOUTH
						if(array1[goal_x][goal_y-1] == 0) //This code checks the SOUTH direction
							array1[goal_x][goal_y-1] = currentWave + 1;
 
					if(goal_y < (y_size - 1))//This code checks the array bounds heading NORTH
						if(array1[goal_x][goal_y+1] == 0) //This code checks the NORTH direction
							array1[goal_x][goal_y+1] = currentWave + 1;
				}//end current wave
			}//end X
		}//end Y
	currentWave++;
	}//end while
}


//This is a 1D nested loop version of WavefrontSearch1
//nested as in x and y loops
void WavefrontSearch3(unsigned char array2[150], int x_size, int y_size)
{
	bool foundWave = true;
	unsigned char currentWave = 1; //Looking for goal first

	while(foundWave == true)
	{
		foundWave = false;
		for(int y=0; y < y_size; y++)
		{
			for(int x=0; x < x_size; x++)
			{
				//Indexes
				int index = x + x_size * y;
				int north = x + x_size * (y - 1);
				int south = x + x_size * (y + 1);
				int east = 1 + x + x_size * y;
				int west = x - 1 + x_size * y;

				//WORKING KERNEL				
				if (y < 1)
					north = index;
				if (y > (y_size - 2))
					south = index;
				if (x > x_size - 2)
					east = index;
				if (x < 1)
					west = index;

				if(array2[index] == currentWave)
				{
					foundWave = true;
					int goal_x = x;
					int goal_y = y;

					//This code checks the array bounds heading WEST
					//if(x > 0)
					if(goal_x > 0)
					{
						if (array2[west] == 0)
						{
							array2[west] = currentWave + 1;
						}
					}

					//This code checks the array bounds heading EAST
					//if(x < x_size - 1)
					if(goal_x < (x_size - 1))
					{
						if(array2[east] == 0)
						{
							array2[east] = currentWave + 1;
						}							
					}

					//This code checks the array bounds heading SOUTH
					//if((y > 0) || (y < y_size))
					//if(goal_y > 0)
					if(goal_y < (y_size - 1))
					{
						if(array2[south] == 0)
						{
							array2[south] = currentWave + 1;
						}
					}

					//This code checks the array bounds heading NORTH
					//if(y < y_size - 1)
					//if(goal_y < (y_size - 1))
					if(goal_y > 0)
					{
						if (array2[north] == 0)
						{
							array2[north] = currentWave + 1;
						}
					}

				}//end current wave
			}//end x
		}//end y
		currentWave++;
	}//end while
					
}

//This is a 1D unnested loop version of WavefrontSearch1
//unnested , no seperate x and y loops
void WavefrontSearch4(unsigned char array2[150], int x_size, int y_size)
{
	bool foundWave = true;
	unsigned char currentWave = 1; //Looking for goal first

	int arraysize = x_size * y_size;
	int x = 0;
	int y = 0;

	while(foundWave == true)
	{
		foundWave = false;

		//loop throughout array
		for(int arrayCounter=0; arrayCounter < arraysize; arrayCounter++)
		{
			int index = x + x_size * y;
			int north = x + x_size * (y - 1);
			int south = x + x_size * (y + 1);
			int east = 1 + x + x_size * y;
			int west = x - 1 + x_size * y;

			if(x == x_size)
			{
				x = 0;//set to first column
				y ++;//move down a row
			}
			if(y == y_size)
			{
				y = 0;//set to first row
				x = 0;//set to first column
			}

			if (y < 1)
				north = index;
			
			if (y > (y_size - 2))
				south = index;
			
			if (x > x_size - 2)
				east = index;
			
			if (x < 1)
				west = index;

			
			if(array2[index] == currentWave)
			{
				foundWave = true;
				int goal_x = x;
				int goal_y = y;

				//This code checks the array bounds heading WEST
				if (goal_x > 0)
				{
					if (array2[west] == 0)
					{
						array2[west] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading EAST
				if(goal_x < (x_size - 1))
				{
					if(array2[east] == 0)
					{
						array2[east] = currentWave + 1;
					}							
				}

				//This code checks the array bounds heading SOUTH
				if(goal_y < y_size - 1)
				{
					if(array2[south] == 0)
					{
						array2[south] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading NORTH
				if(goal_y > 0)
				{
					if (array2[north] == 0)
					{
						array2[north] = currentWave + 1;
					}
				}

			}//end current wave

			x ++;// move over a column
		}//end loop

		currentWave++;
	}//end while
}


//This is a 1D unnested loop version of WavefrontSearch1
//unnested , no seperate x and y loops
//this version starts searching nearer to the kernel
void WavefrontSearch5(unsigned char array2[150], int x_size, int y_size)
{
	bool foundWave = true;
	unsigned char currentWave = 1; //Looking for goal first

	int arraysize = x_size * y_size;
	int x = 0;
	int y = 0;
	int goal_x = 0;
	int goal_y = 0;
	int index, north, south, east, west;

	//here is where we will differ, find the goal first
	for(int arrayCounter=0; arrayCounter < arraysize; arrayCounter++)
	{
		index = x + x_size * y;
		if(x == x_size)
			{
				x = 0;//set to first column
				y++;//move down a row
			}
		if(y == y_size)
		{
			y = 0;//set to first row
			x = 0;//set to first column
		}

		if (array2[index] == 1)
		{
			goal_x = x;
			goal_y = y;
			break;
		}
		x++;// move over a column
	}

	//where to start looking for inital kernel
	// another area where we differ, start near where the target is
	int arrayStart = 1 - goal_x + x_size * goal_y;
	if (arrayStart < x_size * y)// 0
		arrayStart = x_size * y;//make sure we don't go past the start of the array on left side of row

	/*MessageBox::Show(
		String::Format(" goal_x = {0}\n goal_y = {1}\n x = {2}\n\n y = {3}", goal_x, goal_y, x, y ),
		"stats",
		MessageBoxButtons::OK, MessageBoxIcon::Information);*/

	while(foundWave == true)
	{
		foundWave = false;

		//loop throughout array
		for(int arrayCounter = arrayStart; arrayCounter < arraysize; arrayCounter++)
		{
			index = x + x_size * y;
			north = x + x_size * (y - 1);
			south = x + x_size * (y + 1);
			east = 1 + x + x_size * y;
			west = x - 1 + x_size * y;

			if(x == x_size)
			{
				x = 0;//set to first column
				y ++;//move down a row
			}
			if(y == y_size)
			{
				y = 0;//set to first row
				x = 0;//set to first column
			}

			if (y < 1)
				north = index;
			
			if (y > (y_size - 2))
				south = index;
			
			if (x > x_size - 2)
				east = index;
			
			if (x < 1)
				west = index;

			
			if(array2[index] == currentWave)
			{
				foundWave = true;
				int goal_x = x;
				int goal_y = y;

				//This code checks the array bounds heading WEST
				if (goal_x > 0)
				{
					if (array2[west] == 0)
					{
						array2[west] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading EAST
				if(goal_x < (x_size - 1))
				{
					if(array2[east] == 0)
					{
						array2[east] = currentWave + 1;
					}							
				}

				//This code checks the array bounds heading SOUTH
				if(goal_y < y_size - 1)
				{
					if(array2[south] == 0)
					{
						array2[south] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading NORTH
				if(goal_y > 0)
				{
					if (array2[north] == 0)
					{
						array2[north] = currentWave + 1;
					}
				}

			}//end current wave

			x ++;// move over a column
		}//end loop
		currentWave++;
		arrayStart = 0;// the next time we loop around, have to start at 0
	}//end while
}

//This is a 1D unnested loop version of WavefrontSearch1
//unnested , no seperate x and y loops
//this version starts searching nearer to the kernel
// as well as pre-seeding the kernel
void WavefrontSearch6(unsigned char array2[150], int x_size, int y_size)
{
	bool foundWave = true;
	unsigned char currentWave = 1; //Looking for goal first

	int arraysize = x_size * y_size;
	int x = 0;
	int y = 0;
	int goal_x = 0;
	int goal_y = 0;
	int index, north, south, east, west;

	//here is where we will differ, find the goal first
	for(int arrayCounter=0; arrayCounter < arraysize; arrayCounter++)
	{
		index = x + x_size * y;
		if(x == x_size)
			{
				x = 0;//set to first column
				y++;//move down a row
			}
		if(y == y_size)
		{
			y = 0;//set to first row
			x = 0;//set to first column
		}

		if (array2[index] == 1)
		{
			goal_x = x;
			goal_y = y;
			break;
		}
		x++;// move over a column
	}

	//here we differ, mark the first wave adjacent to the target
	//now that we know where the goal is, mark the adjacent blocks 
	//with the next step to seed the kernel
	//do this outside any loops
	index = goal_x + x_size * goal_y;
	north = goal_x + x_size * (goal_y - 1);
	south = goal_x + x_size * (goal_y + 1);
	east = 1 + goal_x + x_size * goal_y;
	west = goal_x - 1 + x_size * goal_y;

	currentWave ++;//currentwave should be at 2 now
	
	//fix up a little to use goal_y instead of north and south
	//will look cleaner
	if ((array2[north] != 255) && (north > -1))
		array2[north] = currentWave;	
	if ((array2[south] != 255) && (south < x_size * y_size))
		array2[south] = currentWave;
	if ((array2[east] != 255) && (goal_x < x_size - 1 ) ) 
		array2[east] = currentWave;	
	if ((array2[west] != 255) && (goal_x > 0))
		array2[west] = currentWave;
	//done seeding the kernelw

	// where to start looking for inital kernel
	// another area where we differ, 
	// start near the northwest of the target
	int arrayStart = (goal_x - 1) + x_size * (goal_y - 2);
	
	//make sure we don't go past the start of the array on left side of row
	//at this point, we know where the goal is and we know
	// that the first wave has been seeded

	//we will then start looking for the next wave to the NorthWest
	//of the destination to start our next wave


	//int arrayStart = (goal_x - 1) + x_size * (goal_y - 2);
	x = goal_x - 1;
	y = goal_y - 2;

	/*MessageBox::Show(
		String::Format(" goal_x = {0}\n goal_y = {1}\n\n x = {2}\n y = {3}\n\n north = {4}\n\n arrayStart = {5}", goal_x, goal_y, x, y, north, arrayStart ),
		"WEST",
		MessageBoxButtons::OK, MessageBoxIcon::Information);*/

	//array start is OK

	/*MessageBox::Show(
		String::Format(" goal_x = {0}\n goal_y = {1}\n x = {2}\n\n y = {3}", goal_x, goal_y, x, y ),
		"stats",
		MessageBoxButtons::OK, MessageBoxIcon::Information);*/



	while(foundWave == true)
	{
		foundWave = false;

		//loop through the array, first time to the northwest of the target
		for(int arrayCounter = arrayStart; arrayCounter < arraysize; arrayCounter++)
		{
			index = x + x_size * y;
			north = x + x_size * (y - 1);
			south = x + x_size * (y + 1);
			east = 1 + x + x_size * y;
			west = x - 1 + x_size * y;
						
			if(x == x_size)
			{
				x = 0;//set to first column
				y++;//move down a row
			}
			if(y == y_size)
			{
				y = 0;//set to first row
				x = 0;//set to first column
			}		

			if (y < 1)
				north = index;			
			if (y > (y_size - 2))
				south = index;			
			if (x > (x_size - 2))
				east = index;			
			if (x < 1)
				west = index;

			if(array2[index] == currentWave)
			{
				foundWave = true;
				goal_x = x;
				goal_y = y;

				//This code checks the array bounds heading WEST
				if (goal_x > 0)
				{
					if (array2[west] == 0)
					{
						array2[west] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading EAST
				if(goal_x < (x_size - 1))
				{
					if(array2[east] == 0)
					{
						array2[east] = currentWave + 1;
					}							
				}

				//This code checks the array bounds heading SOUTH
				if(goal_y < y_size - 1)
				{
					if(array2[south] == 0)
					{
						array2[south] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading NORTH
				if(goal_y > 0)
				{
					if (array2[north] == 0)
					{
						array2[north] = currentWave + 1;
					}
				}

				/*MessageBox::Show(
					String::Format(" arrayCounter = {0}\n\n north = {1}\n south = {2}\n east = {3}\n west = {4}\n", arrayCounter, north, south, east, west ),
					"KERNEL",
					MessageBoxButtons::OK, MessageBoxIcon::Information);*/

			}//end current wave

			x++;// move over a column
		}//end loop
		//now that the first two waves are found and seeded
		//we start looking for our next wave from the top
		currentWave ++;
		arrayStart = 0;
	}//end while
}


//This is a 1D unnested loop version of WavefrontSearch1
//unnested , no seperate x and y loops
// this assumes we know where the target is.
// this will be closer to the game parameters
void WavefrontSearch7(unsigned char array2[150], int x_size, int y_size, int target_xx, int target_yy)
{
	bool foundWave = true;
	unsigned char currentWave = 1; //Looking for goal first

	//target_xx = target_x;
	//target_yy = target_y;

	int arraysize = x_size * y_size;
	int x = 0;
	int y = 0;

	int index = 0;
	int north = 0;
	int south = 0;
	int east = 0;
	int west = 0;

	int arrayStart = 0;

	while(foundWave == true)
	{
		foundWave = false;

		//loop throughout array
		for(int arrayCounter=arrayStart; arrayCounter < arraysize; arrayCounter++)
		{
			index = x + x_size * y;
			north = x + x_size * (y - 1);
			south = x + x_size * (y + 1);
			east = 1 + x + x_size * y;
			west = x - 1 + x_size * y;

			if(x == x_size)
			{
				x = 0;//set to first column
				y ++;//move down a row
			}
			if(y == y_size)
			{
				y = 0;//set to first row
				x = 0;//set to first column
			}

			if (y < 1)
				north = index;
			
			if (y > (y_size - 2))
				south = index;
			
			if (x > x_size - 2)
				east = index;
			
			if (x < 1)
				west = index;
			
			if(array2[index] == currentWave)
			{
				foundWave = true;
				int goal_x = x;
				int goal_y = y;

				//This code checks the array bounds heading WEST
				if (goal_x > 0)
				{
					if (array2[west] == 0)
					{
						array2[west] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading EAST
				if(goal_x < (x_size - 1))
				{
					if(array2[east] == 0)
					{
						array2[east] = currentWave + 1;
					}							
				}

				//This code checks the array bounds heading SOUTH
				if(goal_y < y_size - 1)
				{
					if(array2[south] == 0)
					{
						array2[south] = currentWave + 1;
					}
				}

				//This code checks the array bounds heading NORTH
				if(goal_y > 0)
				{
					if (array2[north] == 0)
					{
						array2[north] = currentWave + 1;
					}
				}

			}//end current wave

			x ++;// move over a column
		}//end loop

		currentWave++;
		arrayStart = 0;
	}//end while
}





