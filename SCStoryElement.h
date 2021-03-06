/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCStoryElement_SnapInfo, SCStoryElement_WebMediaInfo, SCStoryElement_HtmlInfo, SCAttributionInfo, SCUserAction, SCAdInfo, SCStoryElementMetrics, SCStoryElementDebug;

@interface SCStoryElement : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int contentType; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) long long timestamp; 
@property (nonatomic,copy) NSString * sssId; 
@property (assign,nonatomic) long long sunriseTimestamp; 
@property (assign,nonatomic) long long sunsetTimestamp; 
@property (nonatomic,readonly) int contentInfoOneOfCase; 
@property (nonatomic,retain) SCStoryElement_SnapInfo * snapInfo; 
@property (nonatomic,retain) SCStoryElement_WebMediaInfo * webMediaInfo; 
@property (nonatomic,retain) SCStoryElement_HtmlInfo * htmlInfo; 
@property (assign,nonatomic) BOOL loop; 
@property (nonatomic,retain) SCAttributionInfo * attributionInfo; 
@property (assign,nonatomic) BOOL hasAttributionInfo; 
@property (nonatomic,copy) NSString * previewURL; 
@property (assign,nonatomic) BOOL isDeletable; 
@property (assign,nonatomic) BOOL isSaveable; 
@property (assign,nonatomic) BOOL isReportable; 
@property (assign,nonatomic) int minimumDurationMs; 
@property (nonatomic,retain) SCUserAction * tapAction; 
@property (assign,nonatomic) BOOL hasTapAction; 
@property (nonatomic,retain) SCUserAction * swipeUpAction; 
@property (assign,nonatomic) BOOL hasSwipeUpAction; 
@property (nonatomic,retain) SCUserAction * swipeLeftAction; 
@property (assign,nonatomic) BOOL hasSwipeLeftAction; 
@property (nonatomic,retain) SCUserAction * pressAndHoldAction; 
@property (assign,nonatomic) BOOL hasPressAndHoldAction; 
@property (nonatomic,retain) SCUserAction * swipeRightAction; 
@property (assign,nonatomic) BOOL hasSwipeRightAction; 
@property (nonatomic,retain) SCUserAction * swipeDownAction; 
@property (assign,nonatomic) BOOL hasSwipeDownAction; 
@property (assign,nonatomic) BOOL shouldPrefetch; 
@property (assign,nonatomic) int prefetchTtlMs; 
@property (nonatomic,retain) SCAdInfo * adInfo; 
@property (assign,nonatomic) BOOL hasAdInfo; 
@property (nonatomic,retain) SCStoryElementMetrics * metrics; 
@property (assign,nonatomic) BOOL hasMetrics; 
@property (nonatomic,retain) SCStoryElementDebug * debugInfo; 
@property (assign,nonatomic) BOOL hasDebugInfo; 
+(id)descriptor;
@end

