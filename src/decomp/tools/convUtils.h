#pragma once
#include "../pc/libaudio_internal.h"

struct seqFile* parse_seqfile(unsigned char* seq);
struct CTL* parse_ctl_data(unsigned char* ctlData);
struct TBL* parse_tbl_data(unsigned char* tbl);
struct SEQ* parse_seq_data(unsigned char* seq);
void update_CTL_sample_pointers(struct seqFile* ctl,struct seqFile* tbl);
#define INITIAL_GFX_ALLOC 10
#define INITIAL_GEO_ALLOC 10
