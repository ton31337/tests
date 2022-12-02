/* pbr_set_table_range => "pbr table range (10000-4294966272)$lb (10000-4294966272)$ub" */
DEFUN_CMD_FUNC_DECL(pbr_set_table_range)
#define funcdecl_pbr_set_table_range static int pbr_set_table_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lb,\
	const char * lb_str __attribute__ ((unused)),\
	long ub,\
	const char * ub_str __attribute__ ((unused)))
funcdecl_pbr_set_table_range;
DEFUN_CMD_FUNC_TEXT(pbr_set_table_range)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lb = 0;
	const char *lb_str = NULL;
	long ub = 0;
	const char *ub_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lb")) {
			lb_str = argv[_i]->arg;
			char *_end;
			lb = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ub")) {
			ub_str = argv[_i]->arg;
			char *_end;
			ub = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!lb_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "lb_str");
		return CMD_WARNING;
	}
	if (!ub_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ub_str");
		return CMD_WARNING;
	}

	return pbr_set_table_range_magic(self, vty, argc, argv, lb, lb_str, ub, ub_str);
}

/* no_pbr_set_table_range => "no pbr table range [(10000-4294966272)$lb (10000-4294966272)$ub]" */
DEFUN_CMD_FUNC_DECL(no_pbr_set_table_range)
#define funcdecl_no_pbr_set_table_range static int no_pbr_set_table_range_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long lb,\
	const char * lb_str __attribute__ ((unused)),\
	long ub,\
	const char * ub_str __attribute__ ((unused)))
funcdecl_no_pbr_set_table_range;
DEFUN_CMD_FUNC_TEXT(no_pbr_set_table_range)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long lb = 0;
	const char *lb_str = NULL;
	long ub = 0;
	const char *ub_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "lb")) {
			lb_str = argv[_i]->arg;
			char *_end;
			lb = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "ub")) {
			ub_str = argv[_i]->arg;
			char *_end;
			ub = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_pbr_set_table_range_magic(self, vty, argc, argv, lb, lb_str, ub, ub_str);
}

/* pbr_map_match_src => "[no] match src-ip <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_src)
#define funcdecl_pbr_map_match_src static int pbr_map_match_src_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_pbr_map_match_src;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_src)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return pbr_map_match_src_magic(self, vty, argc, argv, no, &prefix, prefix_str);
}

/* pbr_map_match_dst => "[no] match dst-ip <A.B.C.D/M|X:X::X:X/M>$prefix" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_dst)
#define funcdecl_pbr_map_match_dst static int pbr_map_match_dst_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const struct prefix * prefix,\
	const char * prefix_str __attribute__ ((unused)))
funcdecl_pbr_map_match_dst;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_dst)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	struct prefix prefix = { };
	const char *prefix_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "prefix")) {
			prefix_str = argv[_i]->arg;
			_fail = !str2prefix(argv[_i]->arg, &prefix);
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!prefix_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "prefix_str");
		return CMD_WARNING;
	}

	return pbr_map_match_dst_magic(self, vty, argc, argv, no, &prefix, prefix_str);
}

/* pbr_map_match_ip_proto => "[no] match ip-protocol [tcp|udp]$ip_proto" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_ip_proto)
#define funcdecl_pbr_map_match_ip_proto static int pbr_map_match_ip_proto_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * ip_proto)
funcdecl_pbr_map_match_ip_proto;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_ip_proto)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *ip_proto = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ip_proto")) {
			ip_proto = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return pbr_map_match_ip_proto_magic(self, vty, argc, argv, no, ip_proto);
}

/* pbr_map_match_src_port => "[no] match src-port (1-65535)$port" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_src_port)
#define funcdecl_pbr_map_match_src_port static int pbr_map_match_src_port_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_pbr_map_match_src_port;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_src_port)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "port")) {
			port_str = argv[_i]->arg;
			char *_end;
			port = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!port_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "port_str");
		return CMD_WARNING;
	}

	return pbr_map_match_src_port_magic(self, vty, argc, argv, no, port, port_str);
}

/* pbr_map_match_dst_port => "[no] match dst-port (1-65535)$port" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_dst_port)
#define funcdecl_pbr_map_match_dst_port static int pbr_map_match_dst_port_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long port,\
	const char * port_str __attribute__ ((unused)))
funcdecl_pbr_map_match_dst_port;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_dst_port)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long port = 0;
	const char *port_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "port")) {
			port_str = argv[_i]->arg;
			char *_end;
			port = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!port_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "port_str");
		return CMD_WARNING;
	}

	return pbr_map_match_dst_port_magic(self, vty, argc, argv, no, port, port_str);
}

/* pbr_map_match_dscp => "[no] match dscp DSCP$dscp" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_dscp)
#define funcdecl_pbr_map_match_dscp static int pbr_map_match_dscp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * dscp)
funcdecl_pbr_map_match_dscp;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_dscp)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *dscp = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "dscp")) {
			dscp = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!dscp) {
		vty_out(vty, "Internal CLI error [%s]\n", "dscp");
		return CMD_WARNING;
	}

	return pbr_map_match_dscp_magic(self, vty, argc, argv, no, dscp);
}

/* pbr_map_match_ecn => "[no] match ecn (0-3)$ecn" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_ecn)
#define funcdecl_pbr_map_match_ecn static int pbr_map_match_ecn_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long ecn,\
	const char * ecn_str __attribute__ ((unused)))
funcdecl_pbr_map_match_ecn;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_ecn)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long ecn = 0;
	const char *ecn_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "ecn")) {
			ecn_str = argv[_i]->arg;
			char *_end;
			ecn = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!ecn_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "ecn_str");
		return CMD_WARNING;
	}

	return pbr_map_match_ecn_magic(self, vty, argc, argv, no, ecn, ecn_str);
}

/* pbr_map_match_mark => "[no] match mark (1-4294967295)$mark" */
DEFUN_CMD_FUNC_DECL(pbr_map_match_mark)
#define funcdecl_pbr_map_match_mark static int pbr_map_match_mark_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long mark,\
	const char * mark_str __attribute__ ((unused)))
funcdecl_pbr_map_match_mark;
DEFUN_CMD_FUNC_TEXT(pbr_map_match_mark)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long mark = 0;
	const char *mark_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mark")) {
			mark_str = argv[_i]->arg;
			char *_end;
			mark = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!mark_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "mark_str");
		return CMD_WARNING;
	}

	return pbr_map_match_mark_magic(self, vty, argc, argv, no, mark, mark_str);
}

/* pbr_map_action_queue_id => "[no] set queue-id <(1-65535)$queue_id>" */
DEFUN_CMD_FUNC_DECL(pbr_map_action_queue_id)
#define funcdecl_pbr_map_action_queue_id static int pbr_map_action_queue_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long queue_id,\
	const char * queue_id_str __attribute__ ((unused)))
funcdecl_pbr_map_action_queue_id;
DEFUN_CMD_FUNC_TEXT(pbr_map_action_queue_id)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long queue_id = 0;
	const char *queue_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "queue_id")) {
			queue_id_str = argv[_i]->arg;
			char *_end;
			queue_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!queue_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "queue_id_str");
		return CMD_WARNING;
	}

	return pbr_map_action_queue_id_magic(self, vty, argc, argv, no, queue_id, queue_id_str);
}

/* pbr_map_action_pcp => "[no] set pcp <(0-7)$pcp>" */
DEFUN_CMD_FUNC_DECL(pbr_map_action_pcp)
#define funcdecl_pbr_map_action_pcp static int pbr_map_action_pcp_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long pcp,\
	const char * pcp_str __attribute__ ((unused)))
funcdecl_pbr_map_action_pcp;
DEFUN_CMD_FUNC_TEXT(pbr_map_action_pcp)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long pcp = 0;
	const char *pcp_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "pcp")) {
			pcp_str = argv[_i]->arg;
			char *_end;
			pcp = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!pcp_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "pcp_str");
		return CMD_WARNING;
	}

	return pbr_map_action_pcp_magic(self, vty, argc, argv, no, pcp, pcp_str);
}

/* pbr_map_action_vlan_id => "[no] set vlan <(1-4094)$vlan_id>" */
DEFUN_CMD_FUNC_DECL(pbr_map_action_vlan_id)
#define funcdecl_pbr_map_action_vlan_id static int pbr_map_action_vlan_id_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	long vlan_id,\
	const char * vlan_id_str __attribute__ ((unused)))
funcdecl_pbr_map_action_vlan_id;
DEFUN_CMD_FUNC_TEXT(pbr_map_action_vlan_id)
{
#if 2 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	long vlan_id = 0;
	const char *vlan_id_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vlan_id")) {
			vlan_id_str = argv[_i]->arg;
			char *_end;
			vlan_id = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!vlan_id_str) {
		vty_out(vty, "Internal CLI error [%s]\n", "vlan_id_str");
		return CMD_WARNING;
	}

	return pbr_map_action_vlan_id_magic(self, vty, argc, argv, no, vlan_id, vlan_id_str);
}

/* pbr_map_action_strip_vlan => "[no] strip vlan" */
DEFUN_CMD_FUNC_DECL(pbr_map_action_strip_vlan)
#define funcdecl_pbr_map_action_strip_vlan static int pbr_map_action_strip_vlan_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no)
funcdecl_pbr_map_action_strip_vlan;
DEFUN_CMD_FUNC_TEXT(pbr_map_action_strip_vlan)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return pbr_map_action_strip_vlan_magic(self, vty, argc, argv, no);
}

/* pbr_map_nexthop_group => "set nexthop-group NHGNAME$name" */
DEFUN_CMD_FUNC_DECL(pbr_map_nexthop_group)
#define funcdecl_pbr_map_nexthop_group static int pbr_map_nexthop_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_pbr_map_nexthop_group;
DEFUN_CMD_FUNC_TEXT(pbr_map_nexthop_group)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!name) {
		vty_out(vty, "Internal CLI error [%s]\n", "name");
		return CMD_WARNING;
	}

	return pbr_map_nexthop_group_magic(self, vty, argc, argv, name);
}

/* no_pbr_map_nexthop_group => "no set nexthop-group [NHGNAME$name]" */
DEFUN_CMD_FUNC_DECL(no_pbr_map_nexthop_group)
#define funcdecl_no_pbr_map_nexthop_group static int no_pbr_map_nexthop_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name)
funcdecl_no_pbr_map_nexthop_group;
DEFUN_CMD_FUNC_TEXT(no_pbr_map_nexthop_group)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_pbr_map_nexthop_group_magic(self, vty, argc, argv, name);
}

/* pbr_map_nexthop => "set nexthop        <	  <A.B.C.D|X:X::X:X>$addr [INTERFACE$intf]	  |INTERFACE$intf	>        [nexthop-vrf NAME$vrf_name]" */
DEFUN_CMD_FUNC_DECL(pbr_map_nexthop)
#define funcdecl_pbr_map_nexthop static int pbr_map_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * addr,\
	const char * addr_str __attribute__ ((unused)),\
	const char * intf,\
	const char * vrf_name)
funcdecl_pbr_map_nexthop;
DEFUN_CMD_FUNC_TEXT(pbr_map_nexthop)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__addr = { .sa.sa_family = AF_UNSPEC }, *addr = NULL;
	const char *addr_str = NULL;
	const char *intf = NULL;
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__addr.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__addr.sin6.sin6_addr);
				addr = &s__addr;
			} else {
				s__addr.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__addr.sin.sin_addr);
				addr = &s__addr;
			}
		}
		if (!strcmp(argv[_i]->varname, "intf")) {
			intf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return pbr_map_nexthop_magic(self, vty, argc, argv, addr, addr_str, intf, vrf_name);
}

/* no_pbr_map_nexthop => "no set nexthop        [<	  <A.B.C.D|X:X::X:X>$addr [INTERFACE$intf]	  |INTERFACE$intf	>        [nexthop-vrf NAME$vrf_name]]" */
DEFUN_CMD_FUNC_DECL(no_pbr_map_nexthop)
#define funcdecl_no_pbr_map_nexthop static int no_pbr_map_nexthop_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const union sockunion * addr,\
	const char * addr_str __attribute__ ((unused)),\
	const char * intf,\
	const char * vrf_name)
funcdecl_no_pbr_map_nexthop;
DEFUN_CMD_FUNC_TEXT(no_pbr_map_nexthop)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	union sockunion s__addr = { .sa.sa_family = AF_UNSPEC }, *addr = NULL;
	const char *addr_str = NULL;
	const char *intf = NULL;
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "addr")) {
			addr_str = argv[_i]->arg;
			if (argv[_i]->text[0] == 'X') {
				s__addr.sa.sa_family = AF_INET6;
				_fail = !inet_pton(AF_INET6, argv[_i]->arg, &s__addr.sin6.sin6_addr);
				addr = &s__addr;
			} else {
				s__addr.sa.sa_family = AF_INET;
				_fail = !inet_aton(argv[_i]->arg, &s__addr.sin.sin_addr);
				addr = &s__addr;
			}
		}
		if (!strcmp(argv[_i]->varname, "intf")) {
			intf = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 1 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 1 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_pbr_map_nexthop_magic(self, vty, argc, argv, addr, addr_str, intf, vrf_name);
}

/* pbr_map_vrf => "set vrf <NAME$vrf_name|unchanged>" */
DEFUN_CMD_FUNC_DECL(pbr_map_vrf)
#define funcdecl_pbr_map_vrf static int pbr_map_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name)
funcdecl_pbr_map_vrf;
DEFUN_CMD_FUNC_TEXT(pbr_map_vrf)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return pbr_map_vrf_magic(self, vty, argc, argv, vrf_name);
}

/* no_pbr_map_vrf => "no set vrf [<NAME$vrf_name|unchanged>]" */
DEFUN_CMD_FUNC_DECL(no_pbr_map_vrf)
#define funcdecl_no_pbr_map_vrf static int no_pbr_map_vrf_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * vrf_name)
funcdecl_no_pbr_map_vrf;
DEFUN_CMD_FUNC_TEXT(no_pbr_map_vrf)
{
#if 1 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *vrf_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "vrf_name")) {
			vrf_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return no_pbr_map_vrf_magic(self, vty, argc, argv, vrf_name);
}

/* pbr_policy => "[no] pbr-policy PBRMAP$mapname" */
DEFUN_CMD_FUNC_DECL(pbr_policy)
#define funcdecl_pbr_policy static int pbr_policy_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * mapname)
funcdecl_pbr_policy;
DEFUN_CMD_FUNC_TEXT(pbr_policy)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *mapname = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mapname")) {
			mapname = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif
	if (!mapname) {
		vty_out(vty, "Internal CLI error [%s]\n", "mapname");
		return CMD_WARNING;
	}

	return pbr_policy_magic(self, vty, argc, argv, no, mapname);
}

/* show_pbr => "show pbr" */
DEFUN_CMD_FUNC_DECL(show_pbr)
#define funcdecl_show_pbr static int show_pbr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)))
funcdecl_show_pbr;
DEFUN_CMD_FUNC_TEXT(show_pbr)
{
#if 0 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_pbr_magic(self, vty, argc, argv);
}

/* show_pbr_map => "show pbr map [NAME$name] [detail$detail|json$json]" */
DEFUN_CMD_FUNC_DECL(show_pbr_map)
#define funcdecl_show_pbr_map static int show_pbr_map_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name,\
	const char * detail,\
	const char * json)
funcdecl_show_pbr_map;
DEFUN_CMD_FUNC_TEXT(show_pbr_map)
{
#if 3 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;
	const char *detail = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "detail")) {
			detail = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_pbr_map_magic(self, vty, argc, argv, name, detail, json);
}

/* show_pbr_nexthop_group => "show pbr nexthop-groups [WORD$word] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_pbr_nexthop_group)
#define funcdecl_show_pbr_nexthop_group static int show_pbr_nexthop_group_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * word,\
	const char * json)
funcdecl_show_pbr_nexthop_group;
DEFUN_CMD_FUNC_TEXT(show_pbr_nexthop_group)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *word = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "word")) {
			word = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_pbr_nexthop_group_magic(self, vty, argc, argv, word, json);
}

/* show_pbr_interface => "show pbr interface [NAME$name] [json$json]" */
DEFUN_CMD_FUNC_DECL(show_pbr_interface)
#define funcdecl_show_pbr_interface static int show_pbr_interface_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * name,\
	const char * json)
funcdecl_show_pbr_interface;
DEFUN_CMD_FUNC_TEXT(show_pbr_interface)
{
#if 2 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *name = NULL;
	const char *json = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "name")) {
			name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "json")) {
			json = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return show_pbr_interface_magic(self, vty, argc, argv, name, json);
}

/* debug_pbr => "[no] debug pbr [{map$map|zebra$zebra|nht$nht|events$events}]" */
DEFUN_CMD_FUNC_DECL(debug_pbr)
#define funcdecl_debug_pbr static int debug_pbr_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * no,\
	const char * map,\
	const char * zebra,\
	const char * nht,\
	const char * events)
funcdecl_debug_pbr;
DEFUN_CMD_FUNC_TEXT(debug_pbr)
{
#if 5 /* anything to parse? */
	int _i;
#if 0 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *no = NULL;
	const char *map = NULL;
	const char *zebra = NULL;
	const char *nht = NULL;
	const char *events = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 0 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "no")) {
			no = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "map")) {
			map = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "zebra")) {
			zebra = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "nht")) {
			nht = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "events")) {
			events = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
#if 0 /* anything that can fail? */
		if (_fail)
			vty_out (vty, "%% invalid input for %s: %s\n",
				   argv[_i]->varname, argv[_i]->arg);
		_failcnt += _fail;
#endif
	}
#if 0 /* anything that can fail? */
	if (_failcnt)
		return CMD_WARNING;
#endif
#endif

	return debug_pbr_magic(self, vty, argc, argv, no, map, zebra, nht, events);
}

