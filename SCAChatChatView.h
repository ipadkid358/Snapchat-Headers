/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAChatChatView : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* ackTimeSec;
	NSNumber* noteTimeSec;
	NSNumber* playbackAudio;
	NSNumber* tapCount;
	NSNumber* camera;
	NSNumber* cellViewPosition;
	long long messageType;
	long long mediaType;
	long long source;
	long long friendshipStatus;
	long long correspondentType;
	long long snappableInviteAction;
	NSString* correspondentId;
	NSString* subpageName;
	NSString* chatId;
	NSString* mischiefId;
	NSString* teamsnapId;
	NSString* rankingModelId;
	NSString* rankingId;
	NSString* serverRankingId;
	NSString* parcelType;

}
-(void)setCorrespondentId:(id)arg1 ;
-(void)setPlaybackAudio:(BOOL)arg1 ;
-(void)setRankingId:(id)arg1 ;
-(void)setMischiefId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getSource;
-(BOOL)getPlaybackAudio;
-(long long)getMediaType;
-(id)getMischiefId;
-(long long)getCellViewPosition;
-(void)setCellViewPosition:(long long)arg1 ;
-(long long)getFriendshipStatus;
-(void)setFriendshipStatus:(long long)arg1 ;
-(long long)getCorrespondentType;
-(void)setCorrespondentType:(long long)arg1 ;
-(id)getSubpageName;
-(void)setSubpageName:(id)arg1 ;
-(id)getCorrespondentId;
-(id)getRankingModelId;
-(void)setRankingModelId:(id)arg1 ;
-(id)getRankingId;
-(id)getServerRankingId;
-(void)setServerRankingId:(id)arg1 ;
-(long long)getMessageType;
-(double)getNoteTimeSec;
-(void)setNoteTimeSec:(double)arg1 ;
-(long long)getCamera;
-(id)getParcelType;
-(void)setParcelType:(id)arg1 ;
-(double)getAckTimeSec;
-(void)setAckTimeSec:(double)arg1 ;
-(long long)getTapCount;
-(long long)getSnappableInviteAction;
-(void)setSnappableInviteAction:(long long)arg1 ;
-(id)getChatId;
-(void)setChatId:(id)arg1 ;
-(id)getTeamsnapId;
-(void)setTeamsnapId:(id)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTapCount:(long long)arg1 ;
-(void)setCamera:(long long)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
-(void)setMessageType:(long long)arg1 ;
@end

