#include "aux_macro.h"
#include "../malloc_3.cpp"
#include <iostream>

void printStats()
                    {
                        std::cout << "_num_free_blocks: " << _num_free_blocks() << std::endl;
                        std::cout << "_num_free_bytes: " << _num_free_bytes() << std::endl;
                        std::cout << "_num_allocated_blocks: " << _num_allocated_blocks() << std::endl;
                        std::cout << "_num_allocated_bytes: " << _num_allocated_bytes() << std::endl;
                        std::cout << "_num_meta_data_bytes: " << _num_meta_data_bytes() << std::endl;
                        std::cout << "_size_meta_data: " << _size_meta_data() << std::endl;
                    }
                    int main()
                    {
                        PRINT_POINTER(smalloc(184););
printStats();
void* p0 = last_address;
PRINT_POINTER(scalloc(81,106););
printStats();
void* p1 = last_address;
DEBUG_PRINT(sfree(p1););
printStats();
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(scalloc(177,90););
printStats();
void* p2 = last_address;
PRINT_POINTER(srealloc(p2,179););
printStats();
void* p3 = last_address;
PRINT_POINTER(scalloc(64,124););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
PRINT_POINTER(smalloc(233););
printStats();
void* p5 = last_address;
PRINT_POINTER(scalloc(113,170););
printStats();
void* p6 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
DEBUG_PRINT(sfree(p5););
printStats();
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(smalloc(182););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p8 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p8,51););
printStats();
void* p9 = last_address;
PRINT_POINTER(scalloc(4,192););
printStats();
void* p10 = last_address;
DEBUG_PRINT(sfree(p9););
printStats();
PRINT_POINTER(scalloc(154,244););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p12 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
DEBUG_PRINT(sfree(p10););
printStats();
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(221););
printStats();
void* p13 = last_address;
PRINT_POINTER(srealloc(p13,214););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(smalloc(76););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(158,95););
printStats();
void* p16 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p17,110););
printStats();
void* p18 = last_address;
PRINT_POINTER(smalloc(40););
printStats();
void* p19 = last_address;
PRINT_POINTER(srealloc(p15,92););
printStats();
void* p20 = last_address;
PRINT_POINTER(smalloc(9););
printStats();
void* p21 = last_address;
PRINT_POINTER(srealloc(p18,3););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(84,99););
printStats();
void* p23 = last_address;
PRINT_POINTER(scalloc(178,101););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(218,47););
printStats();
void* p25 = last_address;
PRINT_POINTER(scalloc(94,29););
printStats();
void* p26 = last_address;
PRINT_POINTER(scalloc(127,168););
printStats();
void* p27 = last_address;
PRINT_POINTER(srealloc(p21,6););
printStats();
void* p28 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p29 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p30 = last_address;
PRINT_POINTER(scalloc(222,178););
printStats();
void* p31 = last_address;
PRINT_POINTER(scalloc(197,140););
printStats();
void* p32 = last_address;
PRINT_POINTER(scalloc(86,205););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(168,75););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(smalloc(7););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p36 = last_address;
PRINT_POINTER(srealloc(p34,136););
printStats();
void* p37 = last_address;
PRINT_POINTER(scalloc(15,14););
printStats();
void* p38 = last_address;
PRINT_POINTER(srealloc(p19,161););
printStats();
void* p39 = last_address;
PRINT_POINTER(srealloc(p39,2););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(93,201););
printStats();
void* p41 = last_address;
PRINT_POINTER(scalloc(19,126););
printStats();
void* p42 = last_address;
PRINT_POINTER(srealloc(p30,153););
printStats();
void* p43 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p32););
printStats();
PRINT_POINTER(smalloc(110););
printStats();
void* p44 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p31,51););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(smalloc(84););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p47,207););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p37,183););
printStats();
void* p49 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(scalloc(203,227););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(124,117););
printStats();
void* p51 = last_address;
PRINT_POINTER(smalloc(181););
printStats();
void* p52 = last_address;
PRINT_POINTER(scalloc(202,234););
printStats();
void* p53 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(srealloc(p49,2););
printStats();
void* p54 = last_address;
PRINT_POINTER(srealloc(p43,98););
printStats();
void* p55 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p56 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
DEBUG_PRINT(sfree(p25););
printStats();
PRINT_POINTER(scalloc(210,32););
printStats();
void* p57 = last_address;
PRINT_POINTER(srealloc(p57,212););
printStats();
void* p58 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
PRINT_POINTER(smalloc(123););
printStats();
void* p59 = last_address;
PRINT_POINTER(srealloc(p24,35););
printStats();
void* p60 = last_address;
PRINT_POINTER(srealloc(p33,130););
printStats();
void* p61 = last_address;
PRINT_POINTER(srealloc(p58,244););
printStats();
void* p62 = last_address;
PRINT_POINTER(srealloc(p45,18););
printStats();
void* p63 = last_address;
DEBUG_PRINT(sfree(p29););
printStats();
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(smalloc(84););
printStats();
void* p64 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(srealloc(p54,36););
printStats();
void* p65 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p66 = last_address;
PRINT_POINTER(srealloc(p65,12););
printStats();
void* p67 = last_address;
PRINT_POINTER(scalloc(240,13););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
PRINT_POINTER(smalloc(18););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p53););
printStats();
DEBUG_PRINT(sfree(p42););
printStats();
PRINT_POINTER(srealloc(p60,242););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p71 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
PRINT_POINTER(smalloc(242););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(smalloc(171););
printStats();
void* p73 = last_address;
DEBUG_PRINT(sfree(p36););
printStats();
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(srealloc(p63,154););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p56,3););
printStats();
void* p75 = last_address;
PRINT_POINTER(srealloc(p64,207););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p28,237););
printStats();
void* p77 = last_address;
PRINT_POINTER(srealloc(p38,33););
printStats();
void* p78 = last_address;
PRINT_POINTER(scalloc(201,149););
printStats();
void* p79 = last_address;
PRINT_POINTER(scalloc(22,96););
printStats();
void* p80 = last_address;
PRINT_POINTER(srealloc(p72,233););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(117););
printStats();
void* p82 = last_address;
PRINT_POINTER(smalloc(127););
printStats();
void* p83 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(scalloc(237,217););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(70,160););
printStats();
void* p85 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(srealloc(p59,99););
printStats();
void* p86 = last_address;
PRINT_POINTER(scalloc(141,94););
printStats();
void* p87 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(scalloc(178,102););
printStats();
void* p88 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(scalloc(194,226););
printStats();
void* p89 = last_address;
PRINT_POINTER(srealloc(p89,234););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p75,234););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(srealloc(p67,86););
printStats();
void* p92 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(208););
printStats();
void* p94 = last_address;
PRINT_POINTER(scalloc(76,236););
printStats();
void* p95 = last_address;
PRINT_POINTER(smalloc(27););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p50,18););
printStats();
void* p97 = last_address;
PRINT_POINTER(smalloc(13););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(23,105););
printStats();
void* p99 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p100 = last_address;
PRINT_POINTER(srealloc(p99,43););
printStats();
void* p101 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(scalloc(175,67););
printStats();
void* p102 = last_address;
PRINT_POINTER(scalloc(155,88););
printStats();
void* p103 = last_address;
PRINT_POINTER(scalloc(161,73););
printStats();
void* p104 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p105 = last_address;
DEBUG_PRINT(sfree(p77););
printStats();
DEBUG_PRINT(sfree(p103););
printStats();
PRINT_POINTER(srealloc(p104,73););
printStats();
void* p106 = last_address;
PRINT_POINTER(srealloc(p70,125););
printStats();
void* p107 = last_address;
DEBUG_PRINT(sfree(p95););
printStats();
PRINT_POINTER(srealloc(p69,210););
printStats();
void* p108 = last_address;
PRINT_POINTER(scalloc(10,149););
printStats();
void* p109 = last_address;
PRINT_POINTER(srealloc(p84,241););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(55););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p105,8););
printStats();
void* p112 = last_address;
PRINT_POINTER(srealloc(p88,188););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(115,194););
printStats();
void* p114 = last_address;
PRINT_POINTER(smalloc(76););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(203,135););
printStats();
void* p116 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p117 = last_address;
PRINT_POINTER(srealloc(p106,126););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(scalloc(2,160););
printStats();
void* p119 = last_address;
PRINT_POINTER(smalloc(194););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(175););
printStats();
void* p121 = last_address;
PRINT_POINTER(srealloc(p114,178););
printStats();
void* p122 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p123 = last_address;
PRINT_POINTER(smalloc(119););
printStats();
void* p124 = last_address;
PRINT_POINTER(scalloc(219,227););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p48););
printStats();
PRINT_POINTER(smalloc(120););
printStats();
void* p126 = last_address;
PRINT_POINTER(scalloc(186,7););
printStats();
void* p127 = last_address;
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(smalloc(212););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p101,90););
printStats();
void* p129 = last_address;
DEBUG_PRINT(sfree(p78););
printStats();
DEBUG_PRINT(sfree(p98););
printStats();
PRINT_POINTER(scalloc(159,213););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(103););
printStats();
void* p131 = last_address;
PRINT_POINTER(smalloc(145););
printStats();
void* p132 = last_address;
PRINT_POINTER(srealloc(p121,188););
printStats();
void* p133 = last_address;
PRINT_POINTER(smalloc(15););
printStats();
void* p134 = last_address;
PRINT_POINTER(smalloc(92););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
DEBUG_PRINT(sfree(p96););
printStats();
PRINT_POINTER(scalloc(132,79););
printStats();
void* p136 = last_address;
PRINT_POINTER(scalloc(186,246););
printStats();
void* p137 = last_address;
PRINT_POINTER(scalloc(241,213););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(scalloc(50,50););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(20,248););
printStats();
void* p140 = last_address;
PRINT_POINTER(smalloc(14););
printStats();
void* p141 = last_address;
PRINT_POINTER(srealloc(p125,13););
printStats();
void* p142 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
PRINT_POINTER(smalloc(69););
printStats();
void* p143 = last_address;
PRINT_POINTER(srealloc(p134,10););
printStats();
void* p144 = last_address;
PRINT_POINTER(scalloc(240,216););
printStats();
void* p145 = last_address;
PRINT_POINTER(scalloc(131,220););
printStats();
void* p146 = last_address;
PRINT_POINTER(scalloc(18,235););
printStats();
void* p147 = last_address;
DEBUG_PRINT(sfree(p141););
printStats();
DEBUG_PRINT(sfree(p115););
printStats();
PRINT_POINTER(smalloc(172););
printStats();
void* p148 = last_address;
PRINT_POINTER(smalloc(95););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p149,179););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p111););
printStats();
PRINT_POINTER(srealloc(p124,106););
printStats();
void* p151 = last_address;
PRINT_POINTER(srealloc(p91,157););
printStats();
void* p152 = last_address;
PRINT_POINTER(srealloc(p117,117););
printStats();
void* p153 = last_address;
PRINT_POINTER(scalloc(140,230););
printStats();
void* p154 = last_address;
PRINT_POINTER(scalloc(231,114););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p138););
printStats();
PRINT_POINTER(scalloc(22,2););
printStats();
void* p156 = last_address;
PRINT_POINTER(smalloc(88););
printStats();
void* p157 = last_address;
PRINT_POINTER(smalloc(168););
printStats();
void* p158 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p159 = last_address;
PRINT_POINTER(smalloc(147););
printStats();
void* p160 = last_address;
PRINT_POINTER(srealloc(p145,181););
printStats();
void* p161 = last_address;
PRINT_POINTER(smalloc(21););
printStats();
void* p162 = last_address;
PRINT_POINTER(smalloc(107););
printStats();
void* p163 = last_address;
PRINT_POINTER(scalloc(240,205););
printStats();
void* p164 = last_address;
PRINT_POINTER(srealloc(p140,137););
printStats();
void* p165 = last_address;
PRINT_POINTER(srealloc(p126,150););
printStats();
void* p166 = last_address;
PRINT_POINTER(scalloc(131,211););
printStats();
void* p167 = last_address;
DEBUG_PRINT(sfree(p153););
printStats();
PRINT_POINTER(scalloc(218,167););
printStats();
void* p168 = last_address;
PRINT_POINTER(srealloc(p165,81););
printStats();
void* p169 = last_address;
PRINT_POINTER(smalloc(87););
printStats();
void* p170 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(scalloc(104,233););
printStats();
void* p171 = last_address;
DEBUG_PRINT(sfree(p156););
printStats();
PRINT_POINTER(srealloc(p131,209););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(124,32););
printStats();
void* p173 = last_address;
DEBUG_PRINT(sfree(p164););
printStats();
PRINT_POINTER(srealloc(p130,114););
printStats();
void* p174 = last_address;
PRINT_POINTER(srealloc(p171,146););
printStats();
void* p175 = last_address;
PRINT_POINTER(scalloc(162,246););
printStats();
void* p176 = last_address;
PRINT_POINTER(scalloc(210,52););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
PRINT_POINTER(scalloc(34,193););
printStats();
void* p178 = last_address;
PRINT_POINTER(smalloc(244););
printStats();
void* p179 = last_address;
PRINT_POINTER(smalloc(73););
printStats();
void* p180 = last_address;
PRINT_POINTER(scalloc(51,153););
printStats();
void* p181 = last_address;
PRINT_POINTER(srealloc(p158,14););
printStats();
void* p182 = last_address;
DEBUG_PRINT(sfree(p160););
printStats();
PRINT_POINTER(srealloc(p112,154););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(5,4););
printStats();
void* p184 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p185 = last_address;
}
