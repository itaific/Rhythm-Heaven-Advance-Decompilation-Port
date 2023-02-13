.section .rodata
.syntax unified

.include "include/gba.inc"
.include "include/bs_riq.inc"
.include "include/bs/drum_studio.inc"

load_drum_studio_labels


/* Script Data - Drum Lesson (Short 4) */


@ Dialogue
glabel D_0805f560
.ascii "よくきいてマネしてね。\n"
.ascii "好きなタイミングでどうぞ。\n"
.ascii "演奏を止めると、\n"
.asciz "お手本がきけるヨ！"
.balign 4, 0


@ Pattern
glabel D_0805f5b8
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Pattern Start
glabel D_0805f624
    spawn_cue CUE_KICK_R
    rest 21
    return


@ Dialogue
glabel D_0805f648
.ascii "\n"
.ascii "１カ所、音がふえるヨ！\n"
.asciz "わかるかな？\n"
.balign 4, 0


@ Pattern Start
glabel D_0805f670
    spawn_cue CUE_KICK_R
    rest 18
    spawn_cue CUE_KICK_R
    rest 3
    return

@ Dialogue
glabel D_0805f6ac
.ascii "さらに１つ、\n"
.ascii "音がふえるヨ！\n"
.ascii "わかるかな？\n"
.asciz "ヒント：\x8f\x5c字ボタン上"
.balign 4, 0


@ Pattern Start
glabel D_0805f6ec
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_HIHAT
    rest 6
    spawn_cue CUE_KICK_R
    rest 3
    return


@ Dialogue
glabel D_0805f740
.ascii "\n"
.ascii "またまた１カ所、\n"
.ascii "音がふえるヨ！\n"
.asciz "わかるかな？\n"
.balign 4, 0


@ Pattern
glabel D_0805f770
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 24
    return


@ Dialogue
glabel D_0805f7f4
.ascii "そしてまたなんと！\n"
.ascii "１カ所、音がふえるヨ！\n"
.ascii "わかるかな？\n"
.asciz "ヒント：\x8f\x5c字ボタン右"
.balign 4, 0


@ Pattern
glabel D_0805f840
    spawn_cue CUE_SNARE_L
    rest 24
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_TOM
    rest 12
    return


@ Dialogue
glabel D_0805f8dc
.ascii "\n"
.ascii "これまたなんと！！\n"
.ascii "１カ所、音がふえるヨ！\n"
.asciz "わかるかな？\n"
.balign 4, 0


@ Pattern
glabel D_0805f918
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_KICK_R
    rest 6
    spawn_cue CUE_SNARE_L
    rest 6
    spawn_cue CUE_KICK_R
    rest 12
    spawn_cue CUE_SNARE_L
    rest 12
    spawn_cue CUE_TOM
    rest 12
    return


@ Dialogue
glabel D_0805f9cc
.ascii "\x8f\x5c字ボタンの上で\n"
.ascii "たたいたパーツは\n"
.ascii "ハイハットっていう\n"
.asciz "シンバルです。"
.balign 4, 0


@ Dialogue
glabel D_0805fa10
.ascii "ドラムセットによって\n"
.ascii "\x8f\x5c字ボタンの上は\n"
.ascii "ハイハットだったり\n"
.asciz "ロールだったりします。"
.balign 4, 0


@ Dialogue
glabel D_0805fa60
.ascii "\n"
.asciz "では、つぎ行きまーす！"
.balign 4, 0

.end
