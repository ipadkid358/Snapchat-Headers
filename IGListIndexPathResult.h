/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface IGListIndexPathResult : NSObject {

	NSMapTable* _oldIndexPathMap;
	NSMapTable* _newIndexPathMap;
	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _updates;
	NSArray* _moves;

}

@property (nonatomic,readonly) long long changeCount; 
@property (nonatomic,copy,readonly) NSArray * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moves;                //@synthesize moves=_moves - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexPathMap:(id)arg5 newIndexPathMap:(id)arg6 ;
-(id)resultWithoutUpdates:(id)arg1 ;
-(id)oldIndexPathForIdentifier:(id)arg1 ;
-(id)newIndexPathForIdentifier:(id)arg1 ;
-(NSArray *)moves;
-(id)resultForBatchUpdates;
-(id)description;
-(long long)changeCount;
-(NSArray *)updates;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(BOOL)hasChanges;
@end

