/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, SCSearchActionModel;

@interface SCStoryManagementSnapCellViewModel : NSObject <NSCopying> {

	BOOL _showRedBorder;
	NSString* _imageMediaKey;
	NSString* _videoMediaKey;
	long long _viewCount;
	long long _captureCount;
	NSDate* _timestamp;
	SCSearchActionModel* _tapFocusedCellActionModel;
	SCSearchActionModel* _tapNonFocusedCellActionModel;

}

@property (nonatomic,copy,readonly) NSString * imageMediaKey;                                        //@synthesize imageMediaKey=_imageMediaKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoMediaKey;                                        //@synthesize videoMediaKey=_videoMediaKey - In the implementation block
@property (nonatomic,readonly) long long viewCount;                                                  //@synthesize viewCount=_viewCount - In the implementation block
@property (nonatomic,readonly) long long captureCount;                                               //@synthesize captureCount=_captureCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL showRedBorder;                                                   //@synthesize showRedBorder=_showRedBorder - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapFocusedCellActionModel;                 //@synthesize tapFocusedCellActionModel=_tapFocusedCellActionModel - In the implementation block
@property (nonatomic,copy,readonly) SCSearchActionModel * tapNonFocusedCellActionModel;              //@synthesize tapNonFocusedCellActionModel=_tapNonFocusedCellActionModel - In the implementation block
-(NSString *)imageMediaKey;
-(NSString *)videoMediaKey;
-(id)initWithImageMediaKey:(id)arg1 videoMediaKey:(id)arg2 viewCount:(long long)arg3 captureCount:(long long)arg4 timestamp:(id)arg5 showRedBorder:(BOOL)arg6 tapFocusedCellActionModel:(id)arg7 tapNonFocusedCellActionModel:(id)arg8 ;
-(BOOL)showRedBorder;
-(SCSearchActionModel *)tapFocusedCellActionModel;
-(SCSearchActionModel *)tapNonFocusedCellActionModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)viewCount;
-(long long)captureCount;
@end

