/* rygel-playbin-renderer-test.c generated by valac 0.21.1, the Vala compiler
 * generated from rygel-playbin-renderer-test.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH
 *
 * Author: Murray Cumming <murrayc@openismus.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>
#include <rygel-renderer-gst.h>


#define RYGEL_TYPE_PLAYBIN_RENDERER_TEST (rygel_playbin_renderer_test_get_type ())
#define RYGEL_PLAYBIN_RENDERER_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTest))
#define RYGEL_PLAYBIN_RENDERER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTestClass))
#define RYGEL_IS_PLAYBIN_RENDERER_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST))
#define RYGEL_IS_PLAYBIN_RENDERER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PLAYBIN_RENDERER_TEST))
#define RYGEL_PLAYBIN_RENDERER_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTestClass))

typedef struct _RygelPlaybinRendererTest RygelPlaybinRendererTest;
typedef struct _RygelPlaybinRendererTestClass RygelPlaybinRendererTestClass;
typedef struct _RygelPlaybinRendererTestPrivate RygelPlaybinRendererTestPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gst_object_unref0(var) ((var == NULL) ? NULL : (var = (gst_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RygelPlaybinRendererTest {
	GObject parent_instance;
	RygelPlaybinRendererTestPrivate * priv;
};

struct _RygelPlaybinRendererTestClass {
	GObjectClass parent_class;
};


static gpointer rygel_playbin_renderer_test_parent_class = NULL;

GType rygel_playbin_renderer_test_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_PLAYBIN_RENDERER_TEST_DUMMY_PROPERTY
};
gint rygel_playbin_renderer_test_main (gchar** args, int args_length1);
RygelPlaybinRendererTest* rygel_playbin_renderer_test_new (void);
RygelPlaybinRendererTest* rygel_playbin_renderer_test_construct (GType object_type);
void rygel_playbin_renderer_test_test_with_default_gstplaybin (RygelPlaybinRendererTest* self);
void rygel_playbin_renderer_test_test_with_existing_gstplaybin (RygelPlaybinRendererTest* self);


gint rygel_playbin_renderer_test_main (gchar** args, int args_length1) {
	gint result = 0;
	RygelPlaybinRendererTest* test = NULL;
	RygelPlaybinRendererTest* _tmp0_ = NULL;
	gst_init (&args_length1, &args);
	_tmp0_ = rygel_playbin_renderer_test_new ();
	test = _tmp0_;
	rygel_playbin_renderer_test_test_with_default_gstplaybin (test);
	rygel_playbin_renderer_test_test_with_existing_gstplaybin (test);
	result = 0;
	_g_object_unref0 (test);
	return result;
}


int rygel_test_playbin_renderer_main (int argc, char ** argv) {
	g_type_init ();
	return rygel_playbin_renderer_test_main (argv, argc);
}


void rygel_playbin_renderer_test_test_with_default_gstplaybin (RygelPlaybinRendererTest* self) {
	RygelPlaybinRenderer* renderer = NULL;
	RygelPlaybinRenderer* _tmp0_ = NULL;
	RygelPlaybinPlayer* player = NULL;
	RygelPlaybinPlayer* _tmp1_ = NULL;
	GstElement* _tmp2_ = NULL;
	GstElement* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = rygel_playbin_renderer_new ("test playbin renderer");
	renderer = _tmp0_;
	_vala_assert (renderer != NULL, "renderer != null");
	_tmp1_ = rygel_playbin_player_get_default ();
	player = _tmp1_;
	_tmp2_ = rygel_playbin_player_get_playbin (player);
	_tmp3_ = _tmp2_;
	_vala_assert (_tmp3_ != NULL, "player.playbin != null");
	_g_object_unref0 (player);
	_g_object_unref0 (renderer);
}


void rygel_playbin_renderer_test_test_with_existing_gstplaybin (RygelPlaybinRendererTest* self) {
	GstElement* element = NULL;
	GstElement* _tmp0_ = NULL;
	RygelPlaybinRenderer* renderer = NULL;
	RygelPlaybinRenderer* _tmp1_ = NULL;
	RygelPlaybinPlayer* player = NULL;
	RygelPlaybinPlayer* _tmp2_ = NULL;
	GstElement* _tmp3_ = NULL;
	GstElement* _tmp4_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = gst_element_factory_make ("playbin", NULL);
	if (_tmp0_ != NULL) {
		gst_object_ref_sink (_tmp0_);
	}
	element = _tmp0_;
	_tmp1_ = rygel_playbin_renderer_new_wrap (element, "test playbin renderer");
	renderer = _tmp1_;
	_vala_assert (renderer != NULL, "renderer != null");
	_tmp2_ = rygel_playbin_player_get_default ();
	player = _tmp2_;
	_tmp3_ = rygel_playbin_player_get_playbin (player);
	_tmp4_ = _tmp3_;
	_vala_assert (_tmp4_ != NULL, "player.playbin != null");
	_g_object_unref0 (player);
	_g_object_unref0 (renderer);
	_gst_object_unref0 (element);
}


RygelPlaybinRendererTest* rygel_playbin_renderer_test_construct (GType object_type) {
	RygelPlaybinRendererTest * self = NULL;
	self = (RygelPlaybinRendererTest*) g_object_new (object_type, NULL);
	return self;
}


RygelPlaybinRendererTest* rygel_playbin_renderer_test_new (void) {
	return rygel_playbin_renderer_test_construct (RYGEL_TYPE_PLAYBIN_RENDERER_TEST);
}


static void rygel_playbin_renderer_test_class_init (RygelPlaybinRendererTestClass * klass) {
	rygel_playbin_renderer_test_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_playbin_renderer_test_instance_init (RygelPlaybinRendererTest * self) {
}


/**
 * TODO: This currently just tests instantiation.
 * We should also test how it works somehow.
 */
GType rygel_playbin_renderer_test_get_type (void) {
	static volatile gsize rygel_playbin_renderer_test_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_playbin_renderer_test_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPlaybinRendererTestClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_playbin_renderer_test_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPlaybinRendererTest), 0, (GInstanceInitFunc) rygel_playbin_renderer_test_instance_init, NULL };
		GType rygel_playbin_renderer_test_type_id;
		rygel_playbin_renderer_test_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelPlaybinRendererTest", &g_define_type_info, 0);
		g_once_init_leave (&rygel_playbin_renderer_test_type_id__volatile, rygel_playbin_renderer_test_type_id);
	}
	return rygel_playbin_renderer_test_type_id__volatile;
}



