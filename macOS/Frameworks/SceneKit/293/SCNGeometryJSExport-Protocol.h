//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLMesh, NSArray, NSString, SCNGeometryElement, SCNGeometrySource, SCNMaterial;

@protocol SCNGeometryJSExport <JSExport>
+ (id)geometryWithMDLMesh:(MDLMesh *)arg1;
+ (id)geometryWithSources:(NSArray *)arg1 elements:(NSArray *)arg2;
+ (id)geometry;
@property(retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property(retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property(nonatomic) unsigned long long subdivisionLevel;
@property(copy, nonatomic) NSArray *levelsOfDetail;
@property(readonly, nonatomic) long long geometryElementCount;
@property(readonly, nonatomic) NSArray *geometryElements;
@property(readonly, nonatomic) NSArray *geometrySources;
@property(retain, nonatomic) SCNMaterial *firstMaterial;
@property(copy, nonatomic) NSArray *materials;
@property(copy, nonatomic) NSString *name;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)getBoundingSphere;
- (id)getBoundingBox;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (SCNGeometryElement *)geometryElementAtIndex:(long long)arg1;
- (NSArray *)geometrySourcesForSemantic:(NSString *)arg1;
- (SCNMaterial *)materialWithName:(NSString *)arg1;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(SCNMaterial *)arg2;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)insertMaterial:(SCNMaterial *)arg1 atIndex:(unsigned long long)arg2;
@end

