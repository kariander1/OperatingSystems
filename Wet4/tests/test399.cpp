#include "aux_macro.h"
#include "../malloc_4.cpp"
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
                        PRINT_POINTER(scalloc(10,7););
printStats();
void* p0 = last_address;
DEBUG_PRINT(sfree(p0););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p1 = last_address;
PRINT_POINTER(smalloc(211););
printStats();
void* p2 = last_address;
PRINT_POINTER(scalloc(49,70););
printStats();
void* p3 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(srealloc(p2,16););
printStats();
void* p4 = last_address;
PRINT_POINTER(scalloc(205,75););
printStats();
void* p5 = last_address;
DEBUG_PRINT(sfree(p4););
printStats();
DEBUG_PRINT(sfree(p5););
printStats();
PRINT_POINTER(srealloc(p1,43););
printStats();
void* p6 = last_address;
PRINT_POINTER(srealloc(p6,221););
printStats();
void* p7 = last_address;
PRINT_POINTER(smalloc(71););
printStats();
void* p8 = last_address;
PRINT_POINTER(srealloc(p8,20););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(138););
printStats();
void* p10 = last_address;
PRINT_POINTER(srealloc(p9,126););
printStats();
void* p11 = last_address;
PRINT_POINTER(smalloc(12););
printStats();
void* p12 = last_address;
PRINT_POINTER(srealloc(p7,223););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(225,152););
printStats();
void* p14 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
PRINT_POINTER(smalloc(68););
printStats();
void* p15 = last_address;
PRINT_POINTER(srealloc(p15,44););
printStats();
void* p16 = last_address;
PRINT_POINTER(smalloc(20););
printStats();
void* p17 = last_address;
PRINT_POINTER(smalloc(90););
printStats();
void* p18 = last_address;
PRINT_POINTER(srealloc(p11,135););
printStats();
void* p19 = last_address;
PRINT_POINTER(scalloc(239,53););
printStats();
void* p20 = last_address;
DEBUG_PRINT(sfree(p17););
printStats();
PRINT_POINTER(scalloc(184,112););
printStats();
void* p21 = last_address;
PRINT_POINTER(scalloc(90,231););
printStats();
void* p22 = last_address;
PRINT_POINTER(scalloc(67,208););
printStats();
void* p23 = last_address;
DEBUG_PRINT(sfree(p21););
printStats();
PRINT_POINTER(smalloc(61););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(140,170););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(196););
printStats();
void* p26 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(srealloc(p16,241););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(122););
printStats();
void* p28 = last_address;
PRINT_POINTER(scalloc(226,76););
printStats();
void* p29 = last_address;
PRINT_POINTER(scalloc(143,193););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(245););
printStats();
void* p31 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
DEBUG_PRINT(sfree(p20););
printStats();
PRINT_POINTER(smalloc(184););
printStats();
void* p32 = last_address;
PRINT_POINTER(scalloc(77,180););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(84,84););
printStats();
void* p34 = last_address;
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(smalloc(159););
printStats();
void* p35 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(smalloc(97););
printStats();
void* p36 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p37 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(scalloc(233,3););
printStats();
void* p38 = last_address;
PRINT_POINTER(smalloc(2););
printStats();
void* p39 = last_address;
DEBUG_PRINT(sfree(p23););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p40 = last_address;
PRINT_POINTER(smalloc(116););
printStats();
void* p41 = last_address;
PRINT_POINTER(srealloc(p36,66););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(scalloc(87,3););
printStats();
void* p43 = last_address;
PRINT_POINTER(smalloc(157););
printStats();
void* p44 = last_address;
PRINT_POINTER(srealloc(p32,57););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p39,158););
printStats();
void* p46 = last_address;
PRINT_POINTER(smalloc(150););
printStats();
void* p47 = last_address;
PRINT_POINTER(srealloc(p42,243););
printStats();
void* p48 = last_address;
PRINT_POINTER(srealloc(p18,246););
printStats();
void* p49 = last_address;
PRINT_POINTER(scalloc(180,80););
printStats();
void* p50 = last_address;
PRINT_POINTER(scalloc(236,20););
printStats();
void* p51 = last_address;
PRINT_POINTER(scalloc(149,226););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p41,235););
printStats();
void* p53 = last_address;
PRINT_POINTER(srealloc(p45,30););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(smalloc(185););
printStats();
void* p55 = last_address;
PRINT_POINTER(scalloc(196,83););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(35,35););
printStats();
void* p57 = last_address;
PRINT_POINTER(scalloc(31,88););
printStats();
void* p58 = last_address;
PRINT_POINTER(scalloc(229,149););
printStats();
void* p59 = last_address;
PRINT_POINTER(scalloc(132,81););
printStats();
void* p60 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p61 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(21,148););
printStats();
void* p63 = last_address;
PRINT_POINTER(srealloc(p25,181););
printStats();
void* p64 = last_address;
PRINT_POINTER(smalloc(121););
printStats();
void* p65 = last_address;
PRINT_POINTER(scalloc(175,208););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(202););
printStats();
void* p67 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
DEBUG_PRINT(sfree(p65););
printStats();
DEBUG_PRINT(sfree(p66););
printStats();
DEBUG_PRINT(sfree(p64););
printStats();
DEBUG_PRINT(sfree(p47););
printStats();
PRINT_POINTER(srealloc(p29,164););
printStats();
void* p68 = last_address;
PRINT_POINTER(scalloc(79,26););
printStats();
void* p69 = last_address;
DEBUG_PRINT(sfree(p59););
printStats();
DEBUG_PRINT(sfree(p58););
printStats();
DEBUG_PRINT(sfree(p62););
printStats();
PRINT_POINTER(srealloc(p61,50););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(154););
printStats();
void* p71 = last_address;
PRINT_POINTER(smalloc(163););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(srealloc(p38,26););
printStats();
void* p73 = last_address;
PRINT_POINTER(srealloc(p14,171););
printStats();
void* p74 = last_address;
PRINT_POINTER(scalloc(41,21););
printStats();
void* p75 = last_address;
PRINT_POINTER(scalloc(244,95););
printStats();
void* p76 = last_address;
PRINT_POINTER(srealloc(p24,106););
printStats();
void* p77 = last_address;
PRINT_POINTER(scalloc(94,180););
printStats();
void* p78 = last_address;
PRINT_POINTER(scalloc(170,237););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p55););
printStats();
DEBUG_PRINT(sfree(p31););
printStats();
PRINT_POINTER(srealloc(p19,184););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p51););
printStats();
PRINT_POINTER(srealloc(p49,247););
printStats();
void* p81 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p82 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(srealloc(p50,105););
printStats();
void* p83 = last_address;
PRINT_POINTER(scalloc(147,192););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(4,115););
printStats();
void* p85 = last_address;
PRINT_POINTER(smalloc(198););
printStats();
void* p86 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
PRINT_POINTER(smalloc(95););
printStats();
void* p87 = last_address;
PRINT_POINTER(scalloc(61,118););
printStats();
void* p88 = last_address;
PRINT_POINTER(srealloc(p84,72););
printStats();
void* p89 = last_address;
PRINT_POINTER(srealloc(p68,169););
printStats();
void* p90 = last_address;
PRINT_POINTER(srealloc(p67,185););
printStats();
void* p91 = last_address;
PRINT_POINTER(srealloc(p80,98););
printStats();
void* p92 = last_address;
PRINT_POINTER(srealloc(p28,145););
printStats();
void* p93 = last_address;
DEBUG_PRINT(sfree(p82););
printStats();
PRINT_POINTER(scalloc(238,67););
printStats();
void* p94 = last_address;
PRINT_POINTER(scalloc(52,248););
printStats();
void* p95 = last_address;
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(srealloc(p48,241););
printStats();
void* p96 = last_address;
DEBUG_PRINT(sfree(p40););
printStats();
PRINT_POINTER(scalloc(2,185););
printStats();
void* p97 = last_address;
PRINT_POINTER(srealloc(p76,247););
printStats();
void* p98 = last_address;
PRINT_POINTER(scalloc(37,210););
printStats();
void* p99 = last_address;
PRINT_POINTER(srealloc(p91,47););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(224););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(17,119););
printStats();
void* p102 = last_address;
DEBUG_PRINT(sfree(p56););
printStats();
DEBUG_PRINT(sfree(p86););
printStats();
DEBUG_PRINT(sfree(p71););
printStats();
DEBUG_PRINT(sfree(p43););
printStats();
PRINT_POINTER(scalloc(215,123););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p100););
printStats();
PRINT_POINTER(scalloc(171,99););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p70,171););
printStats();
void* p105 = last_address;
PRINT_POINTER(srealloc(p105,132););
printStats();
void* p106 = last_address;
PRINT_POINTER(srealloc(p93,132););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p60,127););
printStats();
void* p108 = last_address;
PRINT_POINTER(smalloc(46););
printStats();
void* p109 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p110 = last_address;
PRINT_POINTER(srealloc(p37,107););
printStats();
void* p111 = last_address;
DEBUG_PRINT(sfree(p57););
printStats();
PRINT_POINTER(srealloc(p85,171););
printStats();
void* p112 = last_address;
DEBUG_PRINT(sfree(p90););
printStats();
PRINT_POINTER(smalloc(31););
printStats();
void* p113 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(smalloc(197););
printStats();
void* p114 = last_address;
PRINT_POINTER(scalloc(162,160););
printStats();
void* p115 = last_address;
PRINT_POINTER(scalloc(121,61););
printStats();
void* p116 = last_address;
PRINT_POINTER(srealloc(p77,5););
printStats();
void* p117 = last_address;
PRINT_POINTER(scalloc(27,116););
printStats();
void* p118 = last_address;
DEBUG_PRINT(sfree(p72););
printStats();
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(207,9););
printStats();
void* p119 = last_address;
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(smalloc(217););
printStats();
void* p120 = last_address;
DEBUG_PRINT(sfree(p116););
printStats();
PRINT_POINTER(srealloc(p96,116););
printStats();
void* p121 = last_address;
DEBUG_PRINT(sfree(p92););
printStats();
PRINT_POINTER(srealloc(p119,107););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(198,111););
printStats();
void* p123 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(srealloc(p87,42););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p107););
printStats();
PRINT_POINTER(smalloc(144););
printStats();
void* p125 = last_address;
PRINT_POINTER(scalloc(127,1););
printStats();
void* p126 = last_address;
PRINT_POINTER(scalloc(188,230););
printStats();
void* p127 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p128 = last_address;
PRINT_POINTER(smalloc(131););
printStats();
void* p129 = last_address;
PRINT_POINTER(scalloc(195,160););
printStats();
void* p130 = last_address;
PRINT_POINTER(srealloc(p129,217););
printStats();
void* p131 = last_address;
PRINT_POINTER(smalloc(91););
printStats();
void* p132 = last_address;
PRINT_POINTER(srealloc(p120,43););
printStats();
void* p133 = last_address;
PRINT_POINTER(smalloc(141););
printStats();
void* p134 = last_address;
PRINT_POINTER(scalloc(79,46););
printStats();
void* p135 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p136 = last_address;
DEBUG_PRINT(sfree(p125););
printStats();
PRINT_POINTER(scalloc(139,210););
printStats();
void* p137 = last_address;
PRINT_POINTER(scalloc(146,6););
printStats();
void* p138 = last_address;
PRINT_POINTER(scalloc(26,28););
printStats();
void* p139 = last_address;
PRINT_POINTER(scalloc(134,175););
printStats();
void* p140 = last_address;
PRINT_POINTER(scalloc(213,123););
printStats();
void* p141 = last_address;
PRINT_POINTER(srealloc(p95,154););
printStats();
void* p142 = last_address;
PRINT_POINTER(srealloc(p104,9););
printStats();
void* p143 = last_address;
PRINT_POINTER(srealloc(p134,84););
printStats();
void* p144 = last_address;
PRINT_POINTER(scalloc(65,236););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p54,141););
printStats();
void* p146 = last_address;
DEBUG_PRINT(sfree(p140););
printStats();
PRINT_POINTER(scalloc(105,39););
printStats();
void* p147 = last_address;
PRINT_POINTER(srealloc(p145,55););
printStats();
void* p148 = last_address;
DEBUG_PRINT(sfree(p144););
printStats();
PRINT_POINTER(scalloc(6,62););
printStats();
void* p149 = last_address;
PRINT_POINTER(scalloc(39,117););
printStats();
void* p150 = last_address;
DEBUG_PRINT(sfree(p133););
printStats();
DEBUG_PRINT(sfree(p128););
printStats();
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(srealloc(p121,176););
printStats();
void* p151 = last_address;
DEBUG_PRINT(sfree(p138););
printStats();
PRINT_POINTER(srealloc(p33,81););
printStats();
void* p152 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p153 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p154 = last_address;
PRINT_POINTER(srealloc(p135,80););
printStats();
void* p155 = last_address;
DEBUG_PRINT(sfree(p137););
printStats();
DEBUG_PRINT(sfree(p141););
printStats();
DEBUG_PRINT(sfree(p132););
printStats();
PRINT_POINTER(srealloc(p148,2););
printStats();
void* p156 = last_address;
PRINT_POINTER(scalloc(100,44););
printStats();
void* p157 = last_address;
DEBUG_PRINT(sfree(p117););
printStats();
PRINT_POINTER(smalloc(199););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(141,50););
printStats();
void* p159 = last_address;
PRINT_POINTER(smalloc(210););
printStats();
void* p160 = last_address;
}