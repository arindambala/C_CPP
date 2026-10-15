/*

* Head First Aquarium - Customer Satisfaction Survey
* Aquarium Questionnaire
* How many bits are needed - ???

*/

typedef struct {
    /* 1 bit can store 2 values : True | False */
    unsigned int first_visit: 1; // Is this your first visit?
    unsigned int come_again: 1; // Will you come again?
    unsigned int shark_attack: 1; // Did you lose a child in the Shark Exhibit!!!?

    /* 4 bits can store upto 10 */
    unsigned int fingers_lost: 4; // Number of fingers lost in Piranha Tank....?

    /* 3 bits can store upto 7 */
    unsigned int days_a_week: 3; // How many days a week would you visit if you could?
} survey;