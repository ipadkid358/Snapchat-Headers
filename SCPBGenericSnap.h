/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBSnapMetadata, NSMutableArray, NSMutableDictionary, SCPBMediaUrl;

@interface SCPBGenericSnap : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) int st; 
@property (assign,nonatomic) int m; 
@property (assign,nonatomic) long long ts; 
@property (assign,nonatomic) long long sts; 
@property (assign,nonatomic) BOOL zipped; 
@property (assign,nonatomic) long long pts; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) SCPBSnapMetadata * snapMetadata; 
@property (assign,nonatomic) BOOL hasSnapMetadata; 
@property (assign,nonatomic) long long sendStartTimestamp; 
@property (nonatomic,retain) NSMutableArray * replyMediasArray; 
@property (nonatomic,readonly) unsigned long long replyMediasArray_Count; 
@property (assign,nonatomic) long long seqNum; 
@property (nonatomic,copy) NSString * sn; 
@property (assign,nonatomic) int t; 
@property (assign,nonatomic) double timer; 
@property (nonatomic,copy) NSString * capText; 
@property (assign,nonatomic) double capPos; 
@property (assign,nonatomic) long long capOri; 
@property (assign,nonatomic) int broadcast; 
@property (nonatomic,copy) NSString * broadcastMediaURL; 
@property (nonatomic,copy) NSString * broadcastURL; 
@property (nonatomic,copy) NSString * broadcastActionText; 
@property (nonatomic,copy) NSString * broadcastSecondaryText; 
@property (assign,nonatomic) BOOL broadcastHideTimer; 
@property (nonatomic,copy) NSString * filterId; 
@property (nonatomic,copy) NSString * rp; 
@property (nonatomic,copy) NSString * cId; 
@property (assign,nonatomic) BOOL replayed; 
@property (assign,nonatomic) BOOL pending; 
@property (assign,nonatomic) int c; 
@property (nonatomic,copy) NSString * esId; 
@property (nonatomic,copy) NSString * egData; 
@property (nonatomic,retain) NSMutableArray * uvTagsArray; 
@property (nonatomic,readonly) unsigned long long uvTagsArray_Count; 
@property (assign,nonatomic) BOOL fiNeedsRetry; 
@property (assign,nonatomic) int fiVersion; 
@property (nonatomic,copy) NSString * fiSenderOutAlpha; 
@property (nonatomic,copy) NSString * fiRecipientOutAlpha; 
@property (nonatomic,copy) NSString * fiRecipientOutDelta; 
@property (nonatomic,copy) NSString * fiRecipientOutDeltaCheck; 
@property (assign,nonatomic) long long fiSendTimestamp; 
@property (nonatomic,retain) NSMutableDictionary * fideliusInfo; 
@property (nonatomic,readonly) unsigned long long fideliusInfo_Count; 
@property (nonatomic,copy) NSString * fiRecipientOutGamma; 
@property (nonatomic,copy) NSString * fiSnapKey; 
@property (nonatomic,copy) NSString * fiSnapIv; 
@property (nonatomic,copy) NSString * fiPrevSenderGamma; 
@property (assign,nonatomic) int fiPrevSenderGammaCount; 
@property (nonatomic,copy) NSString * fiSenderOutBeta; 
@property (assign,nonatomic) long long fiSnapReleaseTs; 
@property (assign,nonatomic) int screenCaptureShotCount; 
@property (assign,nonatomic) int screenCaptureRecordingCount; 
@property (assign,nonatomic) BOOL fiRetried; 
@property (nonatomic,retain) SCPBMediaUrl * directDownloadURL; 
@property (assign,nonatomic) BOOL hasDirectDownloadURL; 
+(id)descriptor;
@end
