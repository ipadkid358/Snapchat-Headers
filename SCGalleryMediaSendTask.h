/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCMediaSendTask;
@interface SCGalleryMediaSendTask : NSObject {

	BOOL _isStorySend;
	id<SCMediaSendTask> _task;
	long long _snapSendCount;
	long long _storySendCount;

}

@property (nonatomic,retain) id<SCMediaSendTask> task;              //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) BOOL isStorySend;                      //@synthesize isStorySend=_isStorySend - In the implementation block
@property (assign,nonatomic) long long snapSendCount;               //@synthesize snapSendCount=_snapSendCount - In the implementation block
@property (assign,nonatomic) long long storySendCount;              //@synthesize storySendCount=_storySendCount - In the implementation block
-(long long)snapSendCount;
-(void)setSnapSendCount:(long long)arg1 ;
-(void)setStorySendCount:(long long)arg1 ;
-(long long)storySendCount;
-(BOOL)isStorySend;
-(void)setIsStorySend:(BOOL)arg1 ;
-(id<SCMediaSendTask>)task;
-(void)setTask:(id<SCMediaSendTask>)arg1 ;
@end
