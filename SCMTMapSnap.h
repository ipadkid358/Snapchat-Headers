/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCMTMediaInfo, SCMTStreamingMediaInfo, SCMTOneSnapInfo, SCMTPublicMediaInfo, NSMutableDictionary, SCAttributionInfo, SCContextContextHint, SASAudioStitch;

@interface SCMTMapSnap : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (nonatomic,copy) NSString * storyId; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (assign,nonatomic) BOOL shouldFuzz; 
@property (assign,nonatomic) double fuzzDistance; 
@property (assign,nonatomic) double timeLength; 
@property (assign,nonatomic) BOOL isInfiniteDuration; 
@property (assign,nonatomic) int mediaType; 
@property (nonatomic,retain) SCMTMediaInfo * mediaInfo; 
@property (assign,nonatomic) BOOL hasMediaInfo; 
@property (nonatomic,retain) SCMTStreamingMediaInfo * streamingMediaInfo; 
@property (assign,nonatomic) BOOL hasStreamingMediaInfo; 
@property (nonatomic,retain) SCMTOneSnapInfo * streamingSnapInfo; 
@property (assign,nonatomic) BOOL hasStreamingSnapInfo; 
@property (nonatomic,retain) SCMTPublicMediaInfo * publicMediaInfo; 
@property (assign,nonatomic) BOOL hasPublicMediaInfo; 
@property (nonatomic,copy) NSString * venueId; 
@property (nonatomic,retain) NSMutableDictionary * localizedAddresses; 
@property (nonatomic,readonly) unsigned long long localizedAddresses_Count; 
@property (nonatomic,copy) NSString * multisnapId; 
@property (nonatomic,copy) NSString * multiSnapBundleId; 
@property (assign,nonatomic) int multiSnapSequenceId; 
@property (nonatomic,retain) SCAttributionInfo * attributionInfo; 
@property (assign,nonatomic) BOOL hasAttributionInfo; 
@property (nonatomic,retain) SCContextContextHint * contextHint; 
@property (assign,nonatomic) BOOL hasContextHint; 
@property (nonatomic,retain) SASAudioStitch * audioStitch; 
@property (assign,nonatomic) BOOL hasAudioStitch; 
@property (nonatomic,copy) NSString * unlockablesSnapInfo; 
+(id)descriptor;
@end
