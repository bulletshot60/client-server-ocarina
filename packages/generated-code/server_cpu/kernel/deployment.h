#ifndef __OCARINA_GENERATED_DEPLOYMENT_H_
#define __OCARINA_GENERATED_DEPLOYMENT_H_ 
/*****************************************************/

/*  This file was automatically generated by Ocarina */

/*  Do NOT hand-modify this file, as your            */

/*  changes will be lost when you re-run Ocarina     */

/*****************************************************/

#define POK_CONFIG_LOCAL_NODE 1

#define POK_GENERATED_CODE 1

/*  The POK_LOCAL_NODE macro corresponds to the identifier for this node in */
/*  the distributed system. This identifier is unique for each nodeIn this */
/*  case, this identifier was deduced from theserver_cpu processor component.*/

/*  #define POK_NEEDS_DEBUG 1*/

/*  If you want to activate DEBUG mode, uncomment previous line*/

#define POK_CONFIG_NB_PARTITIONS 0

/*  The maccro POK_CONFIG_NB_PARTITIONS indicates the amount of partitions in*/
/*   the current system.It corresponds to the amount of process componentsin */
/*  the system.*/

#define POK_CONFIG_NB_THREADS 2

/*  The maccro POK_CONFIG_NB_THREADS indicates the amount of threads used in */
/*  the kernel.It comprises the tasks for the partition and the main task of */
/*  each partition that initialize all ressources.*/

#define POK_CONFIG_PARTITIONS_NTHREADS {}

/*  The maccro POK_CONFIG_NB_PARTITIONS_NTHREADS indicates the amount of */
/*  threads in each partition we also add an additional process that */
/*  initialize all partition's entities (communication, threads, ...)*/

#define POK_CONFIG_PARTITIONS_SIZE {}

#define POK_CONFIG_PARTITIONS_SCHEDULER {}

/*  The maccro POK_CONFIG_PARTTITIONS_SIZE indicates the required amount of */
/*  memory for each partition.This value was deduced from the property */
/*  POK::Needed_Memory_Size of each process*/

#define POK_CONFIG_SCHEDULING_SLOTS {30}

#define POK_CONFIG_SCHEDULING_NBSLOTS 1

#define POK_CONFIG_STACKS_SIZE 0

#define POK_CONFIG_NB_BUSES 0

typedef enum
{
  invalid_bus = 0
} pok_bus_identifier_t;

#define POK_CONFIG_NB_NODES 2

#endif