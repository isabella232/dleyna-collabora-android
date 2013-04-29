/*
 * dLeyna
 *
 * Copyright (C) 2013 Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 2.1, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Tom Keel <thomas.keel@intel.com>
 */

#include <connector.h>
#include <glib.h>
#include "dleyna-jni.h"

static gboolean initialize(
    const gchar *server_info,
    const gchar *root_info,
    GQuark error_quark,
    gpointer user_data)
{
    return FALSE;
}

static void shutdown(void)
{
}

static void connected_cb(dleyna_connector_id_t connection)
{
}

static void disconnected_cb_(dleyna_connector_id_t connection)
{
}

static void connect(
    const gchar *server_name,
    dleyna_connector_connected_cb_t connected_cb,
    dleyna_connector_disconnected_cb_t disconnected_cb)
{
}

static void disconnect(void)
{
}

static void client_new_cb(const gchar *client_name)
{
}

static void client_lost_cb(const gchar *client_name)
{
}

static gboolean watch_client(const gchar *client_name)
{
}

static void unwatch_client(const gchar *client_name)
{
}

static void set_client_lost_cb(dleyna_connector_client_lost_cb_t lost_cb)
{
}

static void dispatch_cb(
    dleyna_connector_id_t connection,
    const gchar *sender,
    const gchar *object_id,
    const gchar *interface,
    const gchar *method,
    GVariant *parameters,
    dleyna_connector_msg_id_t message_id)
{
}

static gboolean interface_filter_cb(
    const gchar *object_path,
    const gchar *node,
    const gchar *interface)
{
    return FALSE;
}

static guint publish_object(
    dleyna_connector_id_t connection,
    const gchar *object_path,
    gboolean root,
    guint interface_index,
    const dleyna_connector_dispatch_cb_t *cb_table_1)
{
    return 0;
}

static guint publish_subtree(
    dleyna_connector_id_t connection,
    const gchar *object_path,
    const dleyna_connector_dispatch_cb_t *cb_table,
    guint cb_table_size,
    dleyna_connector_interface_filter_cb_t cb)
{
    return 0;
}

static void unpublish_object(
    dleyna_connector_id_t connection,
    guint object_id)
{
}

static void unpublish_subtree(
    dleyna_connector_id_t connection,
    guint object_id)
{
}

static void return_response(
    dleyna_connector_msg_id_t message_id,
    GVariant *parameters)
{
}

static void return_error(
    dleyna_connector_msg_id_t message_id,
    const GError *error)
{
}

static gboolean notify(
    dleyna_connector_id_t connection,
    const gchar *object_path,
    const gchar *interface_name,
    const gchar *notification_name,
    GVariant *parameters,
    GError **error)
{
    return FALSE;
}

static dleyna_connector_t connector = {
	initialize,
	shutdown,
	connect,
	disconnect,
	watch_client,
	unwatch_client,
	set_client_lost_cb,
	publish_object,
	publish_subtree,
	unpublish_object,
	unpublish_subtree,
	return_response,
	return_error,
	notify,
};

static const dleyna_connector_t *get_interface(void)
{
    return &connector; 
}