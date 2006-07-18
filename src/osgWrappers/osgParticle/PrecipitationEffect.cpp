// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Fog>
#include <osg/Geometry>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/StateSet>
#include <osg/test/CopyOp>
#include <osg/test/PrimitiveSet>
#include <osg/test/State>
#include <osg/test/Vec3>
#include <osg/test/Vec4>
#include <osgParticle/PrecipitationEffect>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::PrecipitationEffect)
	I_BaseType(osg::Node);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgParticle::PrecipitationEffect &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method1(void, traverse, IN, osg::NodeVisitor &, nv);
	I_Method1(void, rain, IN, float, intensity);
	I_Method1(void, snow, IN, float, intensity);
	I_Method1(void, setMaximumParticleDensity, IN, float, density);
	I_Method0(float, setMaximumParticleDensity);
	I_Method1(void, setWind, IN, const osg::Vec3 &, wind);
	I_Method0(const osg::Vec3 &, getWind);
	I_Method1(void, setPosition, IN, const osg::Vec3 &, position);
	I_Method0(const osg::Vec3 &, getPosition);
	I_Method1(void, setCellSize, IN, const osg::Vec3 &, cellSize);
	I_Method0(const osg::Vec3 &, getCellSize);
	I_Method1(void, setParticleSpeed, IN, float, particleSpeed);
	I_Method0(float, getParticleSpeed);
	I_Method1(void, setParticleSize, IN, float, particleSize);
	I_Method0(float, getParticleSize);
	I_Method1(void, setParticleColor, IN, const osg::Vec4 &, color);
	I_Method0(const osg::Vec4 &, getParticleColor);
	I_Method1(void, setNearTransition, IN, float, nearTransition);
	I_Method0(float, getNearTransition);
	I_Method1(void, setFarTransition, IN, float, farTransition);
	I_Method0(float, getFarTransition);
	I_Method1(void, setUseFarLineSegments, IN, bool, useFarLineSegments);
	I_Method0(bool, getUseFarLineSegments);
	I_Method1(void, setFog, IN, osg::Fog *, fog);
	I_Method0(osg::Fog *, getFog);
	I_Method0(const osg::Fog *, getFog);
	I_Method0(osg::Geometry *, getQuadGeometry);
	I_Method0(osg::StateSet *, getQuadStateSet);
	I_Method0(osg::Geometry *, getLineGeometry);
	I_Method0(osg::StateSet *, getLineStateSet);
	I_Method0(osg::Geometry *, getPointGeometry);
	I_Method0(osg::StateSet *, getPointStateSet);
	I_Property(const osg::Vec3 &, CellSize);
	I_Property(float, FarTransition);
	I_Property(osg::Fog *, Fog);
	I_ReadOnlyProperty(osg::Geometry *, LineGeometry);
	I_ReadOnlyProperty(osg::StateSet *, LineStateSet);
	I_WriteOnlyProperty(float, MaximumParticleDensity);
	I_Property(float, NearTransition);
	I_Property(const osg::Vec4 &, ParticleColor);
	I_Property(float, ParticleSize);
	I_Property(float, ParticleSpeed);
	I_ReadOnlyProperty(osg::Geometry *, PointGeometry);
	I_ReadOnlyProperty(osg::StateSet *, PointStateSet);
	I_Property(const osg::Vec3 &, Position);
	I_ReadOnlyProperty(osg::Geometry *, QuadGeometry);
	I_ReadOnlyProperty(osg::StateSet *, QuadStateSet);
	I_Property(bool, UseFarLineSegments);
	I_Property(const osg::Vec3 &, Wind);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell COMMA  osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >, osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap);

BEGIN_OBJECT_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable)
	I_BaseType(osg::Drawable);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osgParticle::PrecipitationEffect::PrecipitationDrawable &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, libraryName);
	I_Method0(const char *, className);
	I_Method1(bool, supports, IN, const osg::PrimitiveFunctor &, x);
	I_Method1(void, accept, IN, osg::PrimitiveFunctor &, x);
	I_Method1(bool, supports, IN, const osg::PrimitiveIndexFunctor &, x);
	I_Method1(void, accept, IN, osg::PrimitiveIndexFunctor &, x);
	I_Method1(void, setRequiresPreviousMatrix, IN, bool, flag);
	I_Method0(bool, getRequiresPreviousMatrix);
	I_Method1(void, setGeometry, IN, osg::Geometry *, geom);
	I_Method0(osg::Geometry *, getGeometry);
	I_Method0(const osg::Geometry *, getGeometry);
	I_Method1(void, setDrawType, IN, GLenum, type);
	I_Method0(GLenum, getDrawType);
	I_Method1(void, setNumberOfVertices, IN, unsigned int, numVertices);
	I_Method0(unsigned int, getNumberOfVertices);
	I_Method1(void, drawImplementation, IN, osg::State &, state);
	I_Method0(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, getCurrentCellMatrixMap);
	I_Method0(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, getPreviousCellMatrixMap);
	I_Method0(void, newFrame);
	I_ReadOnlyProperty(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, CurrentCellMatrixMap);
	I_Property(GLenum, DrawType);
	I_Property(osg::Geometry *, Geometry);
	I_Property(unsigned int, NumberOfVertices);
	I_ReadOnlyProperty(osgParticle::PrecipitationEffect::PrecipitationDrawable::CellMatrixMap &, PreviousCellMatrixMap);
	I_Property(bool, RequiresPreviousMatrix);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell)
	I_Constructor3(IN, int, in_i, IN, int, in_j, IN, int, in_k);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime)
	I_Constructor0();
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osgParticle::PrecipitationEffect::PrecipitationDrawable::LessFunctor)
	I_Constructor0();
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell COMMA  osgParticle::PrecipitationEffect::PrecipitationDrawable::DepthMatrixStartTime >);

