#ifndef SCENE_FACEGRAPH_TRANSFORM_ITEM_CONFIG_H
#define SCENE_FACEGRAPH_TRANSFORM_ITEM_CONFIG_H

#if defined( scene_polyhedron_transform_item_EXPORTS) || defined(scene_sm_transform_item_EXPORTS)
#  define SCENE_FACEGRAPH_TRANSFORM_ITEM_EXPORT Q_DECL_EXPORT
#else
#  define SCENE_FACEGRAPH_TRANSFORM_ITEM_EXPORT Q_DECL_IMPORT
#endif

#endif // SCENE_FACEGRAPH_TRANSFORM_ITEM_CONFIG_H
