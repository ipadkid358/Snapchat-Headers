/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

@interface SCMultiSnapDrawingCache : NSObject {

	NSMutableSet* _activeSegmentIds;
	NSMutableArray* _entries;
	long long _editingSegmentUniqueId;

}

@property (assign,nonatomic) long long editingSegmentUniqueId;              //@synthesize editingSegmentUniqueId=_editingSegmentUniqueId - In the implementation block
-(void)addCacheEntryForImage:(id)arg1 startingStrokeId:(long long)arg2 endingStrokeId:(long long)arg3 strokeCount:(long long)arg4 ;
-(id)cachedImageForDrawingHistory:(id)arg1 historyCount:(long long)arg2 endStrokeIndexPtr:(long long*)arg3 ;
-(void)_cleanUpCacheQueryEndStrokeIndexPtr:(long long*)arg1 endStrokeIndex:(long long)arg2 ;
-(void)_removeUnusedCacheEntries;
-(void)updateWithMultiSnapConfiguration:(id)arg1 ;
-(long long)editingSegmentUniqueId;
-(void)setEditingSegmentUniqueId:(long long)arg1 ;
-(id)init;
@end

