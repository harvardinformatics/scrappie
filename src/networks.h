#ifndef NETWORKS_H
#define NETWORKS_H

#include <stdbool.h>
#include "fast5_interface.h"

Mat_rptr nanonet_posterior(const event_table events, float min_prob, bool return_log);

#endif  /* NETWORKS_H */


