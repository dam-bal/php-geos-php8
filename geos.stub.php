<?php

class GEOSGeometry
{
    public function __construct() {}

    public function __toString(): string {}

    public function buffer(float $dist, array $styleArray): ?GEOSGeometry {}

    public function offsetCurve(float $dist, array $styleArray): ?GEOSGeometry {}

    public function clipByRect(float $xmin, float $ymin, float $xmax, float $ymax): ?GEOSGeometry {}

    public function convexHull(): ?GEOSGeometry {}

    public function union(?GEOSGeometry $otherGeom = null): ?GEOSGeometry {}

    public function pointOnSurface(): ?GEOSGeometry {}

    public function centroid(): ?GEOSGeometry {}

    public function relate(GEOSGeometry $otherGeom, ?string $pattern = null): bool {}

    public function relateBoundaryNodeRule(GEOSGeometry $otherGeom, int $rule): bool {}

    public function simplify(float $tolerance, bool $preserveTopology = false): ?GEOSGeometry {}

    public function setPrecision(float $gridsize, int $flags = 0): ?GEOSGeometry {}

    public function getPrecision(): double {}

    public function normalize(): ?GEOSGeometry {}

    public function extractUniquePoints(): ?GEOSGeometry {}

    public function disjoint(GEOSGeometry $otherGeom): bool {}

    public function touches(GEOSGeometry $otherGeom): bool {}

    public function intersects(GEOSGeometry $otherGeom): bool {}

    public function crosses(GEOSGeometry $otherGeom): bool {}

    public function within(GEOSGeometry $otherGeom): bool {}

    public function contains(GEOSGeometry $otherGeom): bool {}

    public function overlaps(GEOSGeometry $otherGeom): bool {}

    public function covers(GEOSGeometry $otherGeom): bool {}

    public function coveredBy(GEOSGeometry $otherGeom): bool {}

    public function equals(GEOSGeometry $otherGeom): bool {}

    public function equalsExact(GEOSGeometry $otherGeom, double $tolerance = 0): bool {}

    public function isEmpty(GEOSGeometry $otherGeom, double $tolerance = 0): bool {}

    public function checkValidity(): array {}

    public function isSimple(): bool {}

    public function isRing(): bool {}

    public function hasZ(): bool {}

    public function isClosed(): bool {}

    public function typeName(): string {}

    public function typeId(): int {}

    public function getSRID(): int {}

    public function setSRID(int $srid): void {}

    public function numGeometries(): int {}

    public function geometryN(): GEOSGeometry {}

    public function numInteriorRings(): int {}

    public function numPoints(): int {}

    public function getX(): float {}

    public function getY(): float {}

    public function interiorRingN(): GEOSGeometry {}

    public function exteriorRing(): GEOSGeometry {}

    public function numCoordinates(): int {}

    public function dimension(): int {}

    public function coordinateDimension(): int {}

    public function pointN(): GEOSGeometry {}

    public function startPoint(): GEOSGeometry {}

    public function endPoint(): GEOSGeometry {}

    public function area(): float {}

    public function length(): float {}

    public function distance(GEOSGeometry $otherGeom): float {}

    public function hausdorffDistance(GEOSGeometry $otherGeom): float {}

    public function delaunayTriangulation(float $tolerance = 0.0, bool $onlyEdges = false): ?GEOSGeometry {}

    public function project(GEOSGeometry $other, bool $normalized = false): double;

    public function interpolate(float $dist, bool $normalized = false): ?GEOSGeometry;

    public function offsetCurve(float $dist, array $styleArray): ?GEOSGeometry {}

    public function envelope(): GEOSGeometry {}

    public function intersection(GEOSGeometry $otherGeom): ?GEOSGeometry {}

    public function difference(GEOSGeometry $otherGeom): ?GEOSGeometry {}

    public function symDifference(GEOSGeometry $otherGeom): ?GEOSGeometry {}

    public function boundary(): ?GEOSGeometry {}

    public function snapTo(GEOSGeometry $otherGeom, float $tolerance): ?GEOSGeometry {}

    public function node(): GEOSGeometry {}

    public function voronoiDiagram(double $tolerance = 0.0, bool $onlyEdges = false, ?GEOSGeometry $extent = null): ?GEOSGeometry {}
}

class GEOSWKTReader
{
    public function __construct() {}

    public function read(string $wkt): ?GEOSGeometry {}
}

class GEOSWKTWriter
{
    public function __construct() {}

    public function setTrim(bool $trim): void {}

    public function setRoundingPrecision(int $precision): void {}

    public function setOutputDimension(int $dim): void {}

    public function getOutputDimension(): int {}

    public function setOld3D(bool $old3D): void {}

    public function write(GEOSGeometry $geom): ?string {}
}

class GEOSWKBWriter
{
    public function __construct() {}

    public function getOutputDimension(): int {}

    public function setOutputDimension(int $dims): void {}

    public function getByteOrder(): int {}

    public function setByteOrder(int $dims): void {}

    public function setIncludeSRID(bool $includeSRID): void {}

    public function getIncludeSRID(): bool {}

    public function write(GEOSGeometry $geom): string {}

    public function writeHEX(GEOSGeometry $geom): string {}
}

class GEOSWKBReader
{
    public function __construct() {}

    public function read(string $wkb): ?GEOSGeometry {}

    public function readHEX(string $wkb): ?GEOSGeometry {}
}

function GEOSVersion(): string {}

function GEOSPolygonize(GEOSGeometry $geom): array {}

function GEOSLineMerge(GEOSGeometry $geom): array {}

function GEOSSharedPaths(GEOSGeometry $geom1, GEOSGeometry $geom2): ?GEOSGeometry {}

function GEOSRelateMatch(string $matrix, string $pattern): bool {}
