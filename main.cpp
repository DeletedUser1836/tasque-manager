#include <iostream>
#include <string>

struct task
{
    std::string TaskName;
    std::string TaskDescription;
    int TaskDate[5] = {00, 00, 0000, 00, 00};
};

task add_task(std::string TaskName, std::string TaskDesc, std::string TaskDate, std::string TaskHour)
{
    task newTask;
    newTask.TaskName = TaskName;
    newTask.TaskDescription = TaskDesc;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j > 0; j++)
        {
            if(TaskDate[j] != '.')
            {
                /*
                    Date Format DD.MM.YYY
                    user input example: 11.09.2025
                    11 - DD
                    09 - MM (MM <= 12)
                    2025 - YYYY (YYYY > Current Year)
                */
            }
        }
    }
}
void list_options()
{
    std::cout<<"Options:: " <<std::endl;
    std::cout<<"0-Exit" <<std::endl;
    std::cout<<"1-Add Task" <<std::endl;
    std::cout<<"2-Remove Task" <<std::endl;
    std::cout<<"3-Edit Tasks" <<std::endl; 
    std::cout<<"4-List Tasks" <<std::endl;
}


int main()
{
    while (true)
    {
        list_options();
        
        char opt = 0;
        std::cout<<"Choose one of the options above: ";
        std::cin>>opt;
                
        switch(opt)
        {
            //Exiting programm
            case 0:
            {
                std::cout<<"Thanks for using my task manager!"<<std::endl;
                exit;
            }
            //Adding Task
            case 1:
            {
                std::string taskName= "";
                std::cout<<"Enter the name of the new task: "<<std::endl;
                std::cin>>taskName;

                std::string taskDesc= "";
                std::cout<<"Enter the description of the task: "<<std::endl;
                std::cin>>taskDesc;

                std::string taskDate= "";
                while (true)
                {    
                    std::cout<<"Enter the end time of the task in DD.MM.YYYY format."<<std::endl;
                    std::cin>>taskDate;
                    char tmp;
                    //DD
                    if(taskDate[1] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[2] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    { 
                        tmp++;
                    }
                    else if(taskDate[3] != '.')
                    {
                        tmp++;
                    }
                    //MM
                    else if(taskDate[4] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[5] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[6] != '.')
                    {   
                        tmp++;
                    }
                    //YYYY
                    else if(taskDate[7] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[8] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[9] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskDate[10] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    
                    if(tmp != 0)
                    {
                        std::cout<<"Invalid character was provided, please enter once again."<<std::endl;
                        taskDate="";
                    }
                    else if(tmp == 0)
                    {
                        break;
                    }
                }

                std::string taskHour ="";
                while(true)
                {
                    std::cout<<"Enter the end hour of the task in HH:MM format.";
                    std::cin>>taskHour;

                    
                }
                add_task(taskName, taskDesc, taskDate, taskHour);
            }
            //Removing Task
            case 2:
            {
                
            }
            //Editing Tasks
            case 3:
            {

            }
            //Listing Tasks
            case 4:
            {

            }      
            default:
            {
                std::cout<<"Invalid option/argument. Please choose once again from the listed ones."<<std::endl;
            }
        }
    }         
    return 0;
}