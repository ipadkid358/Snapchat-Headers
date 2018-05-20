/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString;

@interface MLBGitResponse : GPBMessage

@property (nonatomic,copy) NSString * commitSha; 
@property (assign,nonatomic) BOOL hasCommitSha; 
@property (nonatomic,copy) NSString * branch; 
@property (assign,nonatomic) BOOL hasBranch; 
@property (nonatomic,copy) NSString * tag; 
@property (assign,nonatomic) BOOL hasTag; 
@property (nonatomic,copy) NSString * buildConfig; 
@property (assign,nonatomic) BOOL hasBuildConfig; 
@property (nonatomic,copy) NSString * bootloaderGitSha; 
@property (assign,nonatomic) BOOL hasBootloaderGitSha; 
@property (assign,nonatomic) unsigned bootloaderCrc32; 
@property (assign,nonatomic) BOOL hasBootloaderCrc32; 
+(id)descriptor;
@end
