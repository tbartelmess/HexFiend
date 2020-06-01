//
//  LayoutRepresenter.h
//  HexFiend_2
//
//  Created by Kevin Wojniak on 5/17/20.
//  Copyright © 2020 ridiculous_fish. All rights reserved.
//

#import <HexFiend/HFRepresenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface LayoutRepresenter : HFRepresenter

@property (readonly, copy) NSArray *representers;

- (void)addRepresenter:(HFRepresenter *)representer;

- (void)removeRepresenter:(HFRepresenter *)representer;

@property (nonatomic) BOOL maximizesBytesPerLine;

- (CGFloat)minimumViewWidthForLayoutInProposedWidth:(CGFloat)proposedWidth;

- (NSUInteger)maximumBytesPerLineForLayoutInProposedWidth:(CGFloat)proposedWidth;

- (CGFloat)minimumViewWidthForBytesPerLine:(NSUInteger)bytesPerLine;

- (void)performLayout;

@end

NS_ASSUME_NONNULL_END
