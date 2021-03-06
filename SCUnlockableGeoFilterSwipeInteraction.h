/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUnlockableSwipeInteraction.h>

@class SOJUUnlockableTrackInfo, NSString, NSDate;

@interface SCUnlockableGeoFilterSwipeInteraction : NSObject <SCUnlockableSwipeInteraction> {

	SOJUUnlockableTrackInfo* _unlockableTrackInfo;
	NSString* _unlockableId;
	unsigned long long _swipedOverCount;
	double _totalSwipedViewSec;
	unsigned long long _sequenceNumber;
	unsigned long long _indexPosition;
	NSDate* _firstSeenTimestamp;
	unsigned long long _snapSendCount;
	unsigned long long _storyPostCount;
	unsigned long long _memoriesSaveCount;
	unsigned long long _directSnapSendRecipients;
	NSString* _encryptedGeoData;
	long long _geofilterType;

}

@property (nonatomic,retain) SOJUUnlockableTrackInfo * unlockableTrackInfo;              //@synthesize unlockableTrackInfo=_unlockableTrackInfo - In the implementation block
@property (nonatomic,retain) NSString * unlockableId;                                    //@synthesize unlockableId=_unlockableId - In the implementation block
@property (assign,nonatomic) unsigned long long swipedOverCount;                         //@synthesize swipedOverCount=_swipedOverCount - In the implementation block
@property (assign,nonatomic) double totalSwipedViewSec;                                  //@synthesize totalSwipedViewSec=_totalSwipedViewSec - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned long long indexPosition;                           //@synthesize indexPosition=_indexPosition - In the implementation block
@property (nonatomic,retain) NSDate * firstSeenTimestamp;                                //@synthesize firstSeenTimestamp=_firstSeenTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long snapSendCount;                           //@synthesize snapSendCount=_snapSendCount - In the implementation block
@property (assign,nonatomic) unsigned long long storyPostCount;                          //@synthesize storyPostCount=_storyPostCount - In the implementation block
@property (assign,nonatomic) unsigned long long memoriesSaveCount;                       //@synthesize memoriesSaveCount=_memoriesSaveCount - In the implementation block
@property (assign,nonatomic) unsigned long long directSnapSendRecipients;                //@synthesize directSnapSendRecipients=_directSnapSendRecipients - In the implementation block
@property (nonatomic,retain) NSString * encryptedGeoData;                                //@synthesize encryptedGeoData=_encryptedGeoData - In the implementation block
@property (assign,nonatomic) long long geofilterType;                                    //@synthesize geofilterType=_geofilterType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)geofilterType;
-(NSDate *)firstSeenTimestamp;
-(void)setGeofilterType:(long long)arg1 ;
-(unsigned long long)swipedOverCount;
-(unsigned long long)snapSendCount;
-(unsigned long long)storyPostCount;
-(unsigned long long)memoriesSaveCount;
-(void)setSwipedOverCount:(unsigned long long)arg1 ;
-(void)setSnapSendCount:(unsigned long long)arg1 ;
-(void)setStoryPostCount:(unsigned long long)arg1 ;
-(void)setMemoriesSaveCount:(unsigned long long)arg1 ;
-(NSString *)unlockableId;
-(SOJUUnlockableTrackInfo *)unlockableTrackInfo;
-(void)setUnlockableTrackInfo:(SOJUUnlockableTrackInfo *)arg1 ;
-(void)setUnlockableId:(NSString *)arg1 ;
-(NSString *)encryptedGeoData;
-(void)setEncryptedGeoData:(NSString *)arg1 ;
-(unsigned long long)directSnapSendRecipients;
-(double)totalSwipedViewSec;
-(unsigned long long)indexPosition;
-(void)setTotalSwipedViewSec:(double)arg1 ;
-(void)setIndexPosition:(unsigned long long)arg1 ;
-(void)setDirectSnapSendRecipients:(unsigned long long)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setFirstSeenTimestamp:(NSDate *)arg1 ;
@end

