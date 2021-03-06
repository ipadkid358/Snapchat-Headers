/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCContextAffordance, SCContextContentMetadata, NSMutableArray;

@interface SCContextContextHint : GPBMessage

@property (assign,nonatomic) int hint; 
@property (assign,nonatomic) long long timestamp; 
@property (nonatomic,retain) SCContextAffordance * affordance; 
@property (assign,nonatomic) BOOL hasAffordance; 
@property (nonatomic,retain) SCContextContentMetadata * contentMetadata; 
@property (assign,nonatomic) BOOL hasContentMetadata; 
@property (nonatomic,retain) NSMutableArray * moreContextArray; 
@property (nonatomic,readonly) unsigned long long moreContextArray_Count; 
+(id)hintFromEncodedString:(id)arg1 ;
+(id)hintFromHasContext:(BOOL)arg1 ;
+(id)descriptor;
@end

