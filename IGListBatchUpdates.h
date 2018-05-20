/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, NSMutableArray;

@interface IGListBatchUpdates : NSObject {

	NSMutableIndexSet* _sectionReloads;
	NSMutableArray* _itemInserts;
	NSMutableArray* _itemDeletes;
	NSMutableArray* _itemReloads;
	NSMutableArray* _itemMoves;
	NSMutableArray* _itemUpdateBlocks;
	NSMutableArray* _itemCompletionBlocks;

}

@property (nonatomic,readonly) NSMutableIndexSet * sectionReloads;                 //@synthesize sectionReloads=_sectionReloads - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemInserts;                       //@synthesize itemInserts=_itemInserts - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemDeletes;                       //@synthesize itemDeletes=_itemDeletes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemReloads;                       //@synthesize itemReloads=_itemReloads - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemMoves;                         //@synthesize itemMoves=_itemMoves - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemUpdateBlocks;                  //@synthesize itemUpdateBlocks=_itemUpdateBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * itemCompletionBlocks;              //@synthesize itemCompletionBlocks=_itemCompletionBlocks - In the implementation block
-(NSMutableArray *)itemUpdateBlocks;
-(NSMutableIndexSet *)sectionReloads;
-(NSMutableArray *)itemInserts;
-(NSMutableArray *)itemMoves;
-(NSMutableArray *)itemReloads;
-(NSMutableArray *)itemDeletes;
-(NSMutableArray *)itemCompletionBlocks;
-(id)init;
-(BOOL)hasChanges;
@end

