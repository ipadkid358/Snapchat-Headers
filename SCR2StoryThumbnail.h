/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, GPBEnumArray;

@interface SCR2StoryThumbnail : GPBMessage

@property (nonatomic,copy) NSString * thumbnailURL; 
@property (nonatomic,copy) NSString * thumbnailIv; 
@property (nonatomic,copy) NSString * mediaKey; 
@property (nonatomic,copy) NSString * videoThumbnailURL; 
@property (nonatomic,copy) NSString * videoFirstFrameThumbnailURL; 
@property (assign,nonatomic) float aspectRatio; 
@property (nonatomic,retain) GPBEnumArray * thumbnailVariantsArray; 
@property (nonatomic,readonly) unsigned long long thumbnailVariantsArray_Count; 
+(id)descriptor;
@end

