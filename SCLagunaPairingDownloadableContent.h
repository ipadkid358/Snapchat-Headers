/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDownloadableContent.h>

@class NSString;

@interface SCLagunaPairingDownloadableContent : SCDownloadableContent {

	unsigned long long _scale;
	NSString* _folderName;

}

@property (assign,nonatomic) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSString * folderName;                   //@synthesize folderName=_folderName - In the implementation block
+(id)shared;
-(id)directoryName;
-(id)eventUniqueId;
-(id)pathForImageNamed:(id)arg1 ;
-(id)init;
-(void)setScale:(unsigned long long)arg1 ;
-(unsigned long long)scale;
-(id)imageNamed:(id)arg1 ;
-(id)resourceName;
-(NSString *)folderName;
-(void)setFolderName:(NSString *)arg1 ;
-(id)fileNames;
@end

