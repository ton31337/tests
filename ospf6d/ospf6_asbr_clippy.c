/* ospf6_redistribute => "redistribute <kernel|connected|static|ripng|isis|bgp|nhrp|table|vnc|babel|sharp|openfabric>[{metric (0-16777214)|metric-type (1-2)$metric_type|route-map RMAP_NAME$rmap_str}]" */
DEFUN_CMD_FUNC_DECL(ospf6_redistribute)
#define funcdecl_ospf6_redistribute static int ospf6_redistribute_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long metric_type,\
	const char * metric_type_str __attribute__ ((unused)),\
	const char * rmap_str)
funcdecl_ospf6_redistribute;
DEFUN_CMD_FUNC_TEXT(ospf6_redistribute)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long metric = 0;
	const char *metric_str = NULL;
	long metric_type = 0;
	const char *metric_type_str = NULL;
	const char *rmap_str = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric_type")) {
			metric_type_str = argv[_i]->arg;
			char *_end;
			metric_type = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rmap_str")) {
			rmap_str = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ospf6_redistribute_magic(self, vty, argc, argv, metric, metric_str, metric_type, metric_type_str, rmap_str);
}

/* ospf6_default_route_originate => "default-information originate [{always$always|metric (0-16777214)$mval|metric-type (1-2)$mtype|route-map RMAP_NAME$rtmap}]" */
DEFUN_CMD_FUNC_DECL(ospf6_default_route_originate)
#define funcdecl_ospf6_default_route_originate static int ospf6_default_route_originate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	const char * always,\
	long mval,\
	const char * mval_str __attribute__ ((unused)),\
	long mtype,\
	const char * mtype_str __attribute__ ((unused)),\
	const char * rtmap)
funcdecl_ospf6_default_route_originate;
DEFUN_CMD_FUNC_TEXT(ospf6_default_route_originate)
{
#if 4 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	const char *always = NULL;
	long mval = 0;
	const char *mval_str = NULL;
	long mtype = 0;
	const char *mtype_str = NULL;
	const char *rtmap = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "always")) {
			always = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
		}
		if (!strcmp(argv[_i]->varname, "mval")) {
			mval_str = argv[_i]->arg;
			char *_end;
			mval = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "mtype")) {
			mtype_str = argv[_i]->arg;
			char *_end;
			mtype = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rtmap")) {
			rtmap = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return ospf6_default_route_originate_magic(self, vty, argc, argv, always, mval, mval_str, mtype, mtype_str, rtmap);
}

/* no_ospf6_default_information_originate => "no default-information originate [{always|metric (0-16777214)|metric-type (1-2)|route-map RMAP_NAME}]" */
DEFUN_CMD_FUNC_DECL(no_ospf6_default_information_originate)
#define funcdecl_no_ospf6_default_information_originate static int no_ospf6_default_information_originate_magic(\
	const struct cmd_element *self __attribute__ ((unused)),\
	struct vty *vty __attribute__ ((unused)),\
	int argc __attribute__ ((unused)),\
	struct cmd_token *argv[] __attribute__ ((unused)),\
	long metric,\
	const char * metric_str __attribute__ ((unused)),\
	long metric_type,\
	const char * metric_type_str __attribute__ ((unused)),\
	const char * rmap_name)
funcdecl_no_ospf6_default_information_originate;
DEFUN_CMD_FUNC_TEXT(no_ospf6_default_information_originate)
{
#if 3 /* anything to parse? */
	int _i;
#if 1 /* anything that can fail? */
	unsigned _fail = 0, _failcnt = 0;
#endif
	long metric = 0;
	const char *metric_str = NULL;
	long metric_type = 0;
	const char *metric_type_str = NULL;
	const char *rmap_name = NULL;

	for (_i = 0; _i < argc; _i++) {
		if (!argv[_i]->varname)
			continue;
#if 1 /* anything that can fail? */
		_fail = 0;
#endif

		if (!strcmp(argv[_i]->varname, "metric")) {
			metric_str = argv[_i]->arg;
			char *_end;
			metric = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "metric_type")) {
			metric_type_str = argv[_i]->arg;
			char *_end;
			metric_type = strtol(argv[_i]->arg, &_end, 10);
			_fail = (_end == argv[_i]->arg) || (*_end != '\0');
		}
		if (!strcmp(argv[_i]->varname, "rmap_name")) {
			rmap_name = (argv[_i]->type == WORD_TKN) ? argv[_i]->text : argv[_i]->arg;
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

	return no_ospf6_default_information_originate_magic(self, vty, argc, argv, metric, metric_str, metric_type, metric_type_str, rmap_name);
}

