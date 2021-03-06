/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSString;

@interface ANSPackageLogOperation : NSOperation {

	NSURL* _compressedLogURL;
	NSString* _multipartMimeBoundary;
	NSURL* _packagedLogURL;

}

@property (nonatomic,retain) NSURL * packagedLogURL;                        //@synthesize packagedLogURL=_packagedLogURL - In the implementation block
@property (nonatomic,retain) NSURL * compressedLogURL;                      //@synthesize compressedLogURL=_compressedLogURL - In the implementation block
@property (nonatomic,retain) NSString * multipartMimeBoundary;              //@synthesize multipartMimeBoundary=_multipartMimeBoundary - In the implementation block
-(NSURL *)packagedLogURL;
-(id)multipartURLForCompressedURL:(id)arg1 withBoundary:(id)arg2 ;
-(void)setMultipartMimeBoundary:(NSString *)arg1 ;
-(void)setPackagedLogURL:(NSURL *)arg1 ;
-(NSURL *)compressedLogURL;
-(void)setCompressedLogURL:(NSURL *)arg1 ;
-(id)initWithCompressedLogURL:(id)arg1 packagedLogURL:(id)arg2 multipartMimeBoundary:(id)arg3 ;
-(NSString *)multipartMimeBoundary;
-(void)main;
@end

