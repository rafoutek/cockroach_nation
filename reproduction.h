
// see if the delay minimum between two reproductions is passed to set reproducting mode on
void time_for_reproduction_or_not(Cockroach *insect, const int nb_min_days_without_sex, const int day);
void indexClosePartner(Cockroach *swarm,int num_insect, int swarmSize ,int *indexClosePartner,double *little_hypotenuse);
void reproduction (Cockroach *swarm, int idx_parent_1, int idx_parent_2, int *swarmSize, const int day);