#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start_pop_size;
    int end_pop_size;
    int years_passed;


    // TODO: Prompt for start size

        do
        {
          start_pop_size = get_int ("Enter starting population size: \n");
        }
        while (start_pop_size < 9);

    // TODO: Prompt for end size
        do
        {
            end_pop_size = get_int ("Enter ending population size: \n");
        }
        while (end_pop_size <= start_pop_size);


    // TODO: Calculate number of years


    for(years_passed = 0; years_passed < start_pop_size / 3 - end_pop_size / 4; years_passed++)

    {
        int calculation = start_pop_size / 3 - end_pop_size / 4;
    }

     // TODO: Print number of years

    printf("Years : %i", years_passed);
}