/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCLensAnalyticsDataBuilder : NSObject {

	unsigned long long _snapSendCount;
	unsigned long long _snapSaveCount;
	unsigned long long _snapReceiveCount;
	unsigned long long _storyPostCount;
	double _modificationDate;

}
+(id)withLensAnalyticsData:(id)arg1 ;
-(id)setSnapSendCount:(unsigned long long)arg1 ;
-(id)setStoryPostCount:(unsigned long long)arg1 ;
-(id)setSnapSaveCount:(unsigned long long)arg1 ;
-(id)setSnapReceiveCount:(unsigned long long)arg1 ;
-(id)build;
-(id)setModificationDate:(double)arg1 ;
@end

