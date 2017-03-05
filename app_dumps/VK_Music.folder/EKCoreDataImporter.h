/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObjectContext, EKManagedObjectMapping, NSMutableSet, NSSet, NSDictionary, NSMutableDictionary;

@interface EKCoreDataImporter : XXUnknownSuperclass {
	NSManagedObjectContext* _context;
	EKManagedObjectMapping* _mapping;
	id _externalRepresentation;
	NSMutableSet* _collectedEntityNames;
	NSSet* _entityNames;
	NSDictionary* _existingEntitiesPrimaryKeys;
	NSMutableDictionary* _fetchedExistingEntities;
}
@property(retain, nonatomic) id externalRepresentation;
@property(retain, nonatomic) EKManagedObjectMapping* mapping;
@property(retain, nonatomic) NSManagedObjectContext* context;
@property(retain, nonatomic) NSMutableDictionary* fetchedExistingEntities;
@property(retain, nonatomic) NSDictionary* existingEntitiesPrimaryKeys;
@property(retain, nonatomic) NSSet* entityNames;
@property(retain, nonatomic) NSMutableSet* collectedEntityNames;
+(id)importerWithMapping:(id)mapping externalRepresentation:(id)representation context:(id)context;
-(void).cxx_destruct;
-(void)cacheObject:(id)object withMapping:(id)mapping;
-(id)existingObjectForRepresentation:(id)representation mapping:(id)mapping context:(id)context;
-(id)cachedObjectsForMapping:(id)mapping;
-(id)fetchExistingObjectsForMapping:(id)mapping;
-(id)primaryKeyValueFromRepresentation:(id)representation usingMapping:(id)mapping context:(id)context;
-(void)inspectRepresentation:(id)representation usingMapping:(id)mapping accumulateInside:(id)inside context:(id)context;
-(void)inspectRepresentationInContext:(id)context;
-(void)collectEntityNamesRecursively:(id)recursively mapping:(id)mapping;
-(void)collectEntityNames;
@end
