/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSData;

@interface SCMultiSnapDrawingCacheEntry : NSObject {

	long long _strokeStartId;
	long long _strokeEndId;
	long long _strokeCount;
	NSMutableSet* _segmentIdsContainingEntry;
	NSData* _imageData;

}

@property (assign,nonatomic) long long strokeStartId;                                 //@synthesize strokeStartId=_strokeStartId - In the implementation block
@property (assign,nonatomic) long long strokeEndId;                                   //@synthesize strokeEndId=_strokeEndId - In the implementation block
@property (assign,nonatomic) long long strokeCount;                                   //@synthesize strokeCount=_strokeCount - In the implementation block
@property (nonatomic,readonly) NSMutableSet * segmentIdsContainingEntry;              //@synthesize segmentIdsContainingEntry=_segmentIdsContainingEntry - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                      //@synthesize imageData=_imageData - In the implementation block
-(long long)strokeStartId;
-(void)setStrokeStartId:(long long)arg1 ;
-(long long)strokeEndId;
-(void)setStrokeEndId:(long long)arg1 ;
-(void)setStrokeCount:(long long)arg1 ;
-(NSMutableSet *)segmentIdsContainingEntry;
-(id)init;
-(id)description;
-(void)setImageData:(NSData *)arg1 ;
-(NSData *)imageData;
-(long long)strokeCount;
@end

