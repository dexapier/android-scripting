/* -*- buffer-read-only: t -*-
 *
 *    keywords.h
 *
 *    Copyright (C) 1994, 1995, 1996, 1997, 1999, 2000, 2001, 2002, 2005,
 *    2006, 2007, by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 *  This file is built by keywords.pl from its data.  Any changes made here
 *  will be lost!
 */
#define KEY_NULL		0
#define KEY___FILE__		1
#define KEY___LINE__		2
#define KEY___PACKAGE__		3
#define KEY___DATA__		4
#define KEY___END__		5
#define KEY_AUTOLOAD		6
#define KEY_BEGIN		7
#define KEY_UNITCHECK		8
#define KEY_CORE		9
#define KEY_DESTROY		10
#define KEY_END			11
#define KEY_INIT		12
#define KEY_CHECK		13
#define KEY_abs			14
#define KEY_accept		15
#define KEY_alarm		16
#define KEY_and			17
#define KEY_atan2		18
#define KEY_bind		19
#define KEY_binmode		20
#define KEY_bless		21
#define KEY_break		22
#define KEY_caller		23
#define KEY_chdir		24
#define KEY_chmod		25
#define KEY_chomp		26
#define KEY_chop		27
#define KEY_chown		28
#define KEY_chr			29
#define KEY_chroot		30
#define KEY_close		31
#define KEY_closedir		32
#define KEY_cmp			33
#define KEY_connect		34
#define KEY_continue		35
#define KEY_cos			36
#define KEY_crypt		37
#define KEY_dbmclose		38
#define KEY_dbmopen		39
#define KEY_default		40
#define KEY_defined		41
#define KEY_delete		42
#define KEY_die			43
#define KEY_do			44
#define KEY_dump		45
#define KEY_each		46
#define KEY_else		47
#define KEY_elsif		48
#define KEY_endgrent		49
#define KEY_endhostent		50
#define KEY_endnetent		51
#define KEY_endprotoent		52
#define KEY_endpwent		53
#define KEY_endservent		54
#define KEY_eof			55
#define KEY_eq			56
#define KEY_eval		57
#define KEY_exec		58
#define KEY_exists		59
#define KEY_exit		60
#define KEY_exp			61
#define KEY_fcntl		62
#define KEY_fileno		63
#define KEY_flock		64
#define KEY_for			65
#define KEY_foreach		66
#define KEY_fork		67
#define KEY_format		68
#define KEY_formline		69
#define KEY_ge			70
#define KEY_getc		71
#define KEY_getgrent		72
#define KEY_getgrgid		73
#define KEY_getgrnam		74
#define KEY_gethostbyaddr	75
#define KEY_gethostbyname	76
#define KEY_gethostent		77
#define KEY_getlogin		78
#define KEY_getnetbyaddr	79
#define KEY_getnetbyname	80
#define KEY_getnetent		81
#define KEY_getpeername		82
#define KEY_getpgrp		83
#define KEY_getppid		84
#define KEY_getpriority		85
#define KEY_getprotobyname	86
#define KEY_getprotobynumber	87
#define KEY_getprotoent		88
#define KEY_getpwent		89
#define KEY_getpwnam		90
#define KEY_getpwuid		91
#define KEY_getservbyname	92
#define KEY_getservbyport	93
#define KEY_getservent		94
#define KEY_getsockname		95
#define KEY_getsockopt		96
#define KEY_given		97
#define KEY_glob		98
#define KEY_gmtime		99
#define KEY_goto		100
#define KEY_grep		101
#define KEY_gt			102
#define KEY_hex			103
#define KEY_if			104
#define KEY_index		105
#define KEY_int			106
#define KEY_ioctl		107
#define KEY_join		108
#define KEY_keys		109
#define KEY_kill		110
#define KEY_last		111
#define KEY_lc			112
#define KEY_lcfirst		113
#define KEY_le			114
#define KEY_length		115
#define KEY_link		116
#define KEY_listen		117
#define KEY_local		118
#define KEY_localtime		119
#define KEY_lock		120
#define KEY_log			121
#define KEY_lstat		122
#define KEY_lt			123
#define KEY_m			124
#define KEY_map			125
#define KEY_mkdir		126
#define KEY_msgctl		127
#define KEY_msgget		128
#define KEY_msgrcv		129
#define KEY_msgsnd		130
#define KEY_my			131
#define KEY_ne			132
#define KEY_next		133
#define KEY_no			134
#define KEY_not			135
#define KEY_oct			136
#define KEY_open		137
#define KEY_opendir		138
#define KEY_or			139
#define KEY_ord			140
#define KEY_our			141
#define KEY_pack		142
#define KEY_package		143
#define KEY_pipe		144
#define KEY_pop			145
#define KEY_pos			146
#define KEY_print		147
#define KEY_printf		148
#define KEY_prototype		149
#define KEY_push		150
#define KEY_q			151
#define KEY_qq			152
#define KEY_qr			153
#define KEY_quotemeta		154
#define KEY_qw			155
#define KEY_qx			156
#define KEY_rand		157
#define KEY_read		158
#define KEY_readdir		159
#define KEY_readline		160
#define KEY_readlink		161
#define KEY_readpipe		162
#define KEY_recv		163
#define KEY_redo		164
#define KEY_ref			165
#define KEY_rename		166
#define KEY_require		167
#define KEY_reset		168
#define KEY_return		169
#define KEY_reverse		170
#define KEY_rewinddir		171
#define KEY_rindex		172
#define KEY_rmdir		173
#define KEY_s			174
#define KEY_say			175
#define KEY_scalar		176
#define KEY_seek		177
#define KEY_seekdir		178
#define KEY_select		179
#define KEY_semctl		180
#define KEY_semget		181
#define KEY_semop		182
#define KEY_send		183
#define KEY_setgrent		184
#define KEY_sethostent		185
#define KEY_setnetent		186
#define KEY_setpgrp		187
#define KEY_setpriority		188
#define KEY_setprotoent		189
#define KEY_setpwent		190
#define KEY_setservent		191
#define KEY_setsockopt		192
#define KEY_shift		193
#define KEY_shmctl		194
#define KEY_shmget		195
#define KEY_shmread		196
#define KEY_shmwrite		197
#define KEY_shutdown		198
#define KEY_sin			199
#define KEY_sleep		200
#define KEY_socket		201
#define KEY_socketpair		202
#define KEY_sort		203
#define KEY_splice		204
#define KEY_split		205
#define KEY_sprintf		206
#define KEY_sqrt		207
#define KEY_srand		208
#define KEY_stat		209
#define KEY_state		210
#define KEY_study		211
#define KEY_sub			212
#define KEY_substr		213
#define KEY_symlink		214
#define KEY_syscall		215
#define KEY_sysopen		216
#define KEY_sysread		217
#define KEY_sysseek		218
#define KEY_system		219
#define KEY_syswrite		220
#define KEY_tell		221
#define KEY_telldir		222
#define KEY_tie			223
#define KEY_tied		224
#define KEY_time		225
#define KEY_times		226
#define KEY_tr			227
#define KEY_truncate		228
#define KEY_uc			229
#define KEY_ucfirst		230
#define KEY_umask		231
#define KEY_undef		232
#define KEY_unless		233
#define KEY_unlink		234
#define KEY_unpack		235
#define KEY_unshift		236
#define KEY_untie		237
#define KEY_until		238
#define KEY_use			239
#define KEY_utime		240
#define KEY_values		241
#define KEY_vec			242
#define KEY_wait		243
#define KEY_waitpid		244
#define KEY_wantarray		245
#define KEY_warn		246
#define KEY_when		247
#define KEY_while		248
#define KEY_write		249
#define KEY_x			250
#define KEY_xor			251
#define KEY_y			252

/* ex: set ro: */
