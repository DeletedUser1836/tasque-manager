#include <iostream>
#include <string>

struct task
{
    std::string TaskName;
    std::string TaskDescription;
    int TaskEndDate[5] = {00, 00, 0000, 00, 00};
                        //DD  MM  YYYY  HH  mm
};

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
                task NewTask;
                std::cout<<"Enter the name of the new task: "<<std::endl;
                std::cin>>NewTask.TaskName;
                std::cout<<"Enter the description of the task: "<<std::endl;
                std::cin>>NewTask.TaskDescription;

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
                        tmp=0;
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
                    unsigned char tmp;

                    if(taskHour[1] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskHour[2] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskHour[3] != ':')
                    {
                        tmp++;
                    }
                    else if(taskHour[4] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }
                    else if(taskHour[5] != '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0')
                    {
                        tmp++;
                    }

                    if(tmp != 0)
                    {
                        std::cout<<"Invalid hour was provided, please enter once again."<<std::endl;
                        tmp=0;
                        taskHour="";
                    }
                    else if(tmp == 0)
                    {

                        break;
                    }
                }
                //add_task(taskName, taskDesc, taskDate, taskHour);
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