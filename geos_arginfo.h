/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 3a1a549d6867ef9311f0c09f0459bab02b130b97 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GEOSVersion, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GEOSPolygonize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, geom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_GEOSLineMerge arginfo_GEOSPolygonize

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_GEOSSharedPaths, 0, 2, GEOSGeometry, 1)
	ZEND_ARG_OBJ_INFO(0, geom1, GEOSGeometry, 0)
	ZEND_ARG_OBJ_INFO(0, geom2, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_GEOSRelateMatch, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_GEOSGeometry___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry___toString arginfo_GEOSVersion

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_buffer, 0, 2, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, dist, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, styleArray, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_offsetCurve arginfo_class_GEOSGeometry_buffer

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_clipByRect, 0, 4, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, xmin, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ymin, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xmax, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ymax, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_convexHull, 0, 0, GEOSGeometry, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_union, 0, 0, GEOSGeometry, 1)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, otherGeom, GEOSGeometry, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_pointOnSurface arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_centroid arginfo_class_GEOSGeometry_convexHull

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_relate, 0, 1, _IS_BOOL, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pattern, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_relateBoundaryNodeRule, 0, 2, _IS_BOOL, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
	ZEND_ARG_TYPE_INFO(0, rule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_simplify, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, tolerance, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, preserveTopology, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_setPrecision, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, gridsize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_getPrecision, 0, 0, double, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_normalize arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_extractUniquePoints arginfo_class_GEOSGeometry_convexHull

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_disjoint, 0, 1, _IS_BOOL, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_touches arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_intersects arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_crosses arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_within arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_contains arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_overlaps arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_covers arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_coveredBy arginfo_class_GEOSGeometry_disjoint

#define arginfo_class_GEOSGeometry_equals arginfo_class_GEOSGeometry_disjoint

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_equalsExact, 0, 1, _IS_BOOL, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, tolerance, double, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_isEmpty arginfo_class_GEOSGeometry_equalsExact

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_checkValidity, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_isSimple, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_isRing arginfo_class_GEOSGeometry_isSimple

#define arginfo_class_GEOSGeometry_hasZ arginfo_class_GEOSGeometry_isSimple

#define arginfo_class_GEOSGeometry_isClosed arginfo_class_GEOSGeometry_isSimple

#define arginfo_class_GEOSGeometry_typeName arginfo_GEOSVersion

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_typeId, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_getSRID arginfo_class_GEOSGeometry_typeId

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_setSRID, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, srid, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_numGeometries arginfo_class_GEOSGeometry_typeId

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_geometryN, 0, 0, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_numInteriorRings arginfo_class_GEOSGeometry_typeId

#define arginfo_class_GEOSGeometry_numPoints arginfo_class_GEOSGeometry_typeId

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_getX, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_getY arginfo_class_GEOSGeometry_getX

#define arginfo_class_GEOSGeometry_interiorRingN arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_exteriorRing arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_numCoordinates arginfo_class_GEOSGeometry_typeId

#define arginfo_class_GEOSGeometry_dimension arginfo_class_GEOSGeometry_typeId

#define arginfo_class_GEOSGeometry_coordinateDimension arginfo_class_GEOSGeometry_typeId

#define arginfo_class_GEOSGeometry_pointN arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_startPoint arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_endPoint arginfo_class_GEOSGeometry_convexHull

#define arginfo_class_GEOSGeometry_area arginfo_class_GEOSGeometry_getX

#define arginfo_class_GEOSGeometry_length arginfo_class_GEOSGeometry_getX

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSGeometry_distance, 0, 1, IS_DOUBLE, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_hausdorffDistance arginfo_class_GEOSGeometry_distance

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_delaunayTriangulation, 0, 0, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, tolerance, IS_DOUBLE, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, onlyEdges, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_project, 0, 1, double, 1)
	ZEND_ARG_OBJ_INFO(0, other, GEOSGeometry, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, normalized, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_interpolate, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, dist, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, normalized, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_offsetCurve arginfo_class_GEOSGeometry_buffer

#define arginfo_class_GEOSGeometry_envelope arginfo_class_GEOSGeometry_convexHull

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_intersection, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_difference arginfo_class_GEOSGeometry_intersection

#define arginfo_class_GEOSGeometry_symDifference arginfo_class_GEOSGeometry_intersection

#define arginfo_class_GEOSGeometry_boundary arginfo_class_GEOSGeometry_convexHull

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_snapTo, 0, 2, GEOSGeometry, 1)
	ZEND_ARG_OBJ_INFO(0, otherGeom, GEOSGeometry, 0)
	ZEND_ARG_TYPE_INFO(0, tolerance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSGeometry_node arginfo_class_GEOSGeometry_convexHull

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSGeometry_voronoiDiagram, 0, 0, GEOSGeometry, 1)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, tolerance, double, 0, "0.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, onlyEdges, _IS_BOOL, 0, "false")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, extent, GEOSGeometry, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKTReader___construct arginfo_class_GEOSGeometry___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSWKTReader_read, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, wkt, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKTWriter___construct arginfo_class_GEOSGeometry___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKTWriter_setTrim, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, trim, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKTWriter_setRoundingPrecision, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKTWriter_setOutputDimension, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, dim, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKTWriter_getOutputDimension arginfo_class_GEOSGeometry_typeId

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKTWriter_setOld3D, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, old3D, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKTWriter_write, 0, 1, IS_STRING, 1)
	ZEND_ARG_OBJ_INFO(0, geom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKBWriter___construct arginfo_class_GEOSGeometry___construct

#define arginfo_class_GEOSWKBWriter_getOutputDimension arginfo_class_GEOSGeometry_typeId

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKBWriter_setOutputDimension, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, dims, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKBWriter_getByteOrder arginfo_class_GEOSGeometry_typeId

#define arginfo_class_GEOSWKBWriter_setByteOrder arginfo_class_GEOSWKBWriter_setOutputDimension

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKBWriter_setIncludeSRID, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, includeSRID, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKBWriter_getIncludeSRID arginfo_class_GEOSGeometry_isSimple

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GEOSWKBWriter_write, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, geom, GEOSGeometry, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKBWriter_writeHEX arginfo_class_GEOSWKBWriter_write

#define arginfo_class_GEOSWKBReader___construct arginfo_class_GEOSGeometry___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_GEOSWKBReader_read, 0, 1, GEOSGeometry, 1)
	ZEND_ARG_TYPE_INFO(0, wkb, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_GEOSWKBReader_readHEX arginfo_class_GEOSWKBReader_read
