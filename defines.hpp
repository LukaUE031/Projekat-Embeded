//9999 is a placeholder

#ifndef TYPEDEFS_HPP
#define TYPEDEFS_HPP

#define SC_INCLUE_FX
#include<tlm>
#include<sysc/datatypes/fx/sc_fixed.h>

typedef tlm:tlm_base_protocol_types::tlm_payload_type pl_t;
typedef tlm:tlm_base_protocol_types::tlm_phase_type ph_t;

//registera in hard
#define ADDR_START 0x00
#define ADDR_READY 0x01
#define ADDR_WIN_VAL 0x02


//bram size -to be determined-
#define BRAM_SIZE 0x3A980//BRAM SIZE 240KB, da li se bira zbog zahtevnosti funkcije ili je hardverski postavljeno
# define DELAY 10 //macro for offset(Delay = T = 1/f = 1/100MHz = 10ns


//AXI&BRAM
#define VP_ADDR_BRAM_L 0x00000000 //9999 is a placeholder
#define VP_ADDR_BRAM_H 0x00000000 + BRAM_SIZE // 9999 is a placeholder


#endif// TYPEDEFS_HPP