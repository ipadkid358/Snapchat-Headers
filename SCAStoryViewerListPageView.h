/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface SCAStoryViewerListPageView : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* viewTimeSec;
	NSNumber* profileSelectCount;
	NSNumber* maxCellViewIndex;
	NSNumber* failedBitmojiLoadCount;
	NSNumber* attemptedBitmojiLoadCount;
	NSNumber* successfulBitmojiLoadCount;
	NSNumber* totalViewerCount;
	long long source;

}
-(void)setViewTimeSec:(double)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(double)getViewTimeSec;
-(long long)getSource;
-(long long)getMaxCellViewIndex;
-(void)setMaxCellViewIndex:(long long)arg1 ;
-(long long)getProfileSelectCount;
-(void)setProfileSelectCount:(long long)arg1 ;
-(long long)getFailedBitmojiLoadCount;
-(void)setFailedBitmojiLoadCount:(long long)arg1 ;
-(long long)getAttemptedBitmojiLoadCount;
-(void)setAttemptedBitmojiLoadCount:(long long)arg1 ;
-(long long)getSuccessfulBitmojiLoadCount;
-(void)setSuccessfulBitmojiLoadCount:(long long)arg1 ;
-(long long)getTotalViewerCount;
-(void)setTotalViewerCount:(long long)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end

